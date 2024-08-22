// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMYRIADCONTEXT_H
#define AFMYRIADCONTEXT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFMyriadGoodnessScoreOverrideState.h"
#import "AFMyriadPerceptualAudioHash.h"

@interface AFMyriadContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger activationExpirationTime; // ivar: _activationExpirationTime
@property (readonly, nonatomic) NSInteger activationSource; // ivar: _activationSource
@property (readonly, copy, nonatomic) AFMyriadGoodnessScoreOverrideState *overrideState; // ivar: _overrideState
@property (readonly, copy, nonatomic) AFMyriadPerceptualAudioHash *perceptualAudioHash; // ivar: _perceptualAudioHash
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(NSUInteger)arg0 perceptualAudioHash:(id)arg1 overrideState:(id)arg2 activationSource:(NSInteger)arg3 activationExpirationTime:(NSUInteger)arg4 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif