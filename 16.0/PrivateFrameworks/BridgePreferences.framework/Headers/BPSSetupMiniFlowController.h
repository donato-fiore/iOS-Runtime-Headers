// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSSETUPMINIFLOWCONTROLLER_H
#define BPSSETUPMINIFLOWCONTROLLER_H

@class NSString;
@protocol BPSBuddyController, BPSBuddyControllerDelegate;

#import <Foundation/Foundation.h>


@interface BPSSetupMiniFlowController : NSObject <BPSBuddyController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BPSBuddyControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDisplayingInSkippedMiniFlow; // ivar: _isDisplayingInSkippedMiniFlow
@property (readonly) Class superclass;


-(id)navigationController;
-(id)viewController;
-(void)pushController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif