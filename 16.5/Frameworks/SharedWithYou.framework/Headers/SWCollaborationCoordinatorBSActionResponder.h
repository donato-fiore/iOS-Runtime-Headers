// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCOLLABORATIONCOORDINATORBSACTIONRESPONDER_H
#define SWCOLLABORATIONCOORDINATORBSACTIONRESPONDER_H

@class NSString;
@protocol _UISceneBSActionResponding;

#import <Foundation/Foundation.h>


@interface SWCollaborationCoordinatorBSActionResponder : NSObject <_UISceneBSActionResponding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedActionResponder;
-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)init;
-(void)_appDidFinishLaunching:(id)arg0 ;


@end


#endif