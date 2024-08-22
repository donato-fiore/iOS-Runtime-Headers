// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPRXSIMTRANSFERRINGVIEWCONTROLLER_H
#define TSPRXSIMTRANSFERRINGVIEWCONTROLLER_H

@class PRXCardContentViewController, NSString, UIActivityIndicatorView;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;



@interface TSPRXSIMTransferringViewController : PRXCardContentViewController <TSSetupFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIActivityIndicatorView *indicatorView; // ivar: _indicatorView
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif