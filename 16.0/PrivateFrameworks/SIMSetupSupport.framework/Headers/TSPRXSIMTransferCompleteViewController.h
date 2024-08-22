// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPRXSIMTRANSFERCOMPLETEVIEWCONTROLLER_H
#define TSPRXSIMTRANSFERCOMPLETEVIEWCONTROLLER_H

@class PRXCardContentViewController, NSString;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;



@interface TSPRXSIMTransferCompleteViewController : PRXCardContentViewController <TSSetupFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif