// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYDECISION_H
#define PTCINEMATOGRAPHYDECISION_H


#import <Foundation/Foundation.h>

#import "PTCinematographyTransition.h"

@interface PTCinematographyDecision : NSObject

@property (readonly, nonatomic, getter=isGroupDecision) BOOL groupDecision;
@property (nonatomic) NSInteger groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic) ? maximumDuration; // ivar: _maximumDuration
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic, getter=isStrongDecision) BOOL strongDecision;
@property (readonly, nonatomic) ? time; // ivar: _time
@property (nonatomic) NSInteger trackIdentifier; // ivar: _trackIdentifier
@property (readonly, nonatomic) PTCinematographyTransition *transition; // ivar: _transition
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isUserDecision) BOOL userDecision;


+(id)_decisionsWithCinematographyDictionaries:(id)arg0 ;
+(id)_mutableDecisionsWithCinematographyDictionaries:(id)arg0 ;
+(id)defaultTransition;
-(BOOL)hasMaximumDuration;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_asCinematographyDictionary;
-(id)_decisionByChangingTime:(struct ? )arg0 ;
-(id)_decisionByRemovingOptions:(NSUInteger)arg0 ;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)_initWithTime:(struct ? )arg0 trackIdentifier:(NSInteger)arg1 groupIdentifier:(NSInteger)arg2 transition:(id)arg3 options:(NSUInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTime:(struct ? )arg0 groupIdentifier:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)initWithTime:(struct ? )arg0 trackIdentifier:(NSInteger)arg1 ;
-(id)initWithTime:(struct ? )arg0 trackIdentifier:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif