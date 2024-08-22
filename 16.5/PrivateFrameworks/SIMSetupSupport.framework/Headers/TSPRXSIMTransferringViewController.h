// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPRXSIMTRANSFERRINGVIEWCONTROLLER_H
#define TSPRXSIMTRANSFERRINGVIEWCONTROLLER_H

@class PRXCardContentViewController, CoreTelephonyClient, NSString, UIActivityIndicatorView, IMOneTimeCodeAccelerator, UILabel, UIStackView;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;



@interface TSPRXSIMTransferringViewController : PRXCardContentViewController <TSSetupFlowItem>



@property (retain) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIActivityIndicatorView *indicatorView; // ivar: _indicatorView
@property (retain) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator; // ivar: _oneTimeCodeAccelerator
@property (retain) UILabel *oneTimeCodeLabel; // ivar: _oneTimeCodeLabel
@property (retain) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(id)init;
-(void)_maybeEnableOneTimeCodeCheck;
-(void)_setupOneTimeCodeDetection;
-(void)dealloc;


@end


#endif