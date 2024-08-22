// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNSPEECHEMOTIONRESULT_H
#define SNSPEECHEMOTIONRESULT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding;

#import <Foundation/Foundation.h>


@interface SNSpeechEmotionResult : NSObject <NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding>



@property CGFloat arousal; // ivar: _arousal
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat dominance; // ivar: _dominance
@property (readonly) NSUInteger hash;
@property CGFloat mood; // ivar: _mood
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property CGFloat valence; // ivar: _valence


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpeechEmotionResult:(id)arg0 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif