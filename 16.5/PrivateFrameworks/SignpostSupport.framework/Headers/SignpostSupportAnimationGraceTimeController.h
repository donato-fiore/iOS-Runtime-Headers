// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTANIMATIONGRACETIMECONTROLLER_H
#define SIGNPOSTSUPPORTANIMATIONGRACETIMECONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SignpostSupportAnimationGraceTime.h"

@interface SignpostSupportAnimationGraceTimeController : NSObject

@property (readonly, nonatomic) SignpostSupportAnimationGraceTime *defaultGraceTime; // ivar: _defaultGraceTime
@property (nonatomic) NSUInteger defaultGraceTimeMs;
@property (readonly, nonatomic) NSMutableDictionary *subsystemGraceTimesDictionary; // ivar: _subsystemGraceTimesDictionary
@property (readonly, nonatomic) SignpostSupportAnimationGraceTime *userInitiatedGraceTime; // ivar: _userInitiatedGraceTime
@property (nonatomic) NSUInteger userInitiatedGraceTimeMs;
@property (readonly, nonatomic) SignpostSupportAnimationGraceTime *userInteractiveGraceTime; // ivar: _userInteractiveGraceTime
@property (nonatomic) NSUInteger userInteractiveGraceTimeMs;


-(NSUInteger)gracetimeMsForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 ;
-(id)debugDescription;
-(id)gracetimeForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 ;
-(id)init;
-(void)_setFirstFrameGraceTime:(id)arg0 forSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 ;
-(void)setAnimationType:(NSUInteger)arg0 forSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 ;
-(void)setFirstFrameGraceTimeMs:(NSUInteger)arg0 forSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 ;


@end


#endif