// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBANIMATIONWRAPPERHOSTREQUESTER_H
#define SBANIMATIONWRAPPERHOSTREQUESTER_H

@class NSString;
@protocol SBSceneViewPresentationConfiguring;

#import <Foundation/Foundation.h>


@interface SBAnimationWrapperHostRequester : NSObject <SBSceneViewPresentationConfiguring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedRequester;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;


@end


#endif