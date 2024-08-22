// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPRXSTARTVIEWCONTROLLER_H
#define TSPRXSTARTVIEWCONTROLLER_H

@class PRXCardContentViewController, PRXAction, NSString, UIImageView;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "SSProximityDevice.h"

@interface TSPRXStartViewController : PRXCardContentViewController <TSSetupFlowItem>



@property (retain) PRXAction *action; // ivar: _action
@property (retain) SSProximityDevice *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIImageView *radioImageView; // ivar: _radioImageView
@property (readonly) Class superclass;


-(id)initWithBtDevice:(id)arg0 ;
-(void)_startClientFlow;
-(void)viewDidLoad;


@end


#endif