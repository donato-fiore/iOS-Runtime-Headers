// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTCOMPOSITORINTERVAL_H
#define SIGNPOSTSUPPORTCOMPOSITORINTERVAL_H

@class NSArray, NSString;
@protocol SignpostSerializable;


#import "SignpostAnimationSubInterval.h"

@interface SignpostSupportCompositorInterval : SignpostAnimationSubInterval <SignpostSerializable>



@property (retain, nonatomic) NSArray *contributingPids; // ivar: _contributingPids
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serializationTypeNumber;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSignpostSupportCompositorInterval:(id)arg0 ;
-(id)humanReadableDictionaryRepresentation;
-(id)humanReadableType;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStartContinuousTime:(NSUInteger)arg0 endContinuousTime:(NSUInteger)arg1 timebaseRatio:(CGFloat)arg2 contributingPids:(id)arg3 ;
-(id)serializeableDictionaryWithShouldRedact:(BOOL)arg0 ;


@end


#endif