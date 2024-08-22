// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSBACKLIGHTFBSSCENEENVIRONMENTDIFFACTIONNULLDELEGATE_H
#define BLSBACKLIGHTFBSSCENEENVIRONMENTDIFFACTIONNULLDELEGATE_H

@class NSString;
@protocol BLSBacklightFBSSceneEnvironmentDiffActionDelegate;

#import <Foundation/Foundation.h>


@interface BLSBacklightFBSSceneEnvironmentDiffActionNullDelegate : NSObject <BLSBacklightFBSSceneEnvironmentDiffActionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)performChangesWithTransitionContext:(id)arg0 environmentDelta:(struct ? )arg1 performActionsBlock:(id)arg2 ;


@end


#endif