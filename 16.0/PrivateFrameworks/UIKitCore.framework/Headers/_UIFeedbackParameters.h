// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFEEDBACKPARAMETERS_H
#define _UIFEEDBACKPARAMETERS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIFeedback.h"
#import "_UIFeedbackParameters.h"

@interface _UIFeedbackParameters : NSObject <NSCopying>



@property (nonatomic) float attackTime; // ivar: _attackTime
@property (readonly, nonatomic, getter=_isAudio) BOOL audio;
@property (nonatomic) float decayTime; // ivar: _decayTime
@property (readonly, nonatomic, getter=_effectiveVolume) float effectiveVolume;
@property (weak, nonatomic) _UIFeedback *feedback; // ivar: _feedback
@property (weak, nonatomic) _UIFeedbackParameters *parentParameters; // ivar: _parentParameters
@property (nonatomic) float rate; // ivar: _rate
@property (nonatomic) float releaseTime; // ivar: _releaseTime
@property (nonatomic) float transposition; // ivar: _transposition
@property (nonatomic) float volume; // ivar: _volume


+(id)parameters;
-(BOOL)isEqual:(id)arg0 ;
-(float)_effectiveValueForParameterWithKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 feedback:(id)arg1 ;
-(id)initWithFeedback:(id)arg0 ;
-(void)_updateParameterWithKey:(id)arg0 ;


@end


#endif