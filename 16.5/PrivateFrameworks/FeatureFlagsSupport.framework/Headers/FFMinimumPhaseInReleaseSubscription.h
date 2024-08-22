// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FFMINIMUMPHASEINRELEASESUBSCRIPTION_H
#define FFMINIMUMPHASEINRELEASESUBSCRIPTION_H

@class NSString;


#import "FFSubscription.h"

@interface FFMinimumPhaseInReleaseSubscription : FFSubscription

@property (readonly, nonatomic) NSString *minimumPhase; // ivar: _minimumPhase
@property (readonly, nonatomic) NSString *targetRelease; // ivar: _targetRelease


+(id)decodeFromDictionary:(id)arg0 ;
+(id)mergeSubscriptions:(id)arg0 ;
-(BOOL)matchesFeature:(id)arg0 inDomain:(id)arg1 inAlreadyLockedConfiguration:(id)arg2 ;
-(BOOL)matchesFeature:(id)arg0 inDomain:(id)arg1 inConfiguration:(id)arg2 ;
-(BOOL)matchesFeatureWithState:(id)arg0 inConfigurationOfUnknownLockState:(id)arg1 ;
-(id)encodeToDictionary;
-(id)initWithPhase:(id)arg0 targetRelease:(id)arg1 ;
-(id)nameOfClass;


@end


#endif