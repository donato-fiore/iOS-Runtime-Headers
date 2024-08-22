// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSPEECHEMOTIONRESULT_H
#define SNSPEECHEMOTIONRESULT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding;

#import <Foundation/Foundation.h>


@interface SNSpeechEmotionResult : NSObject <NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding>

 {
    CGFloat _mood;
    CGFloat _valence;
    CGFloat _arousal;
    CGFloat _dominance;
}


@property (readonly) CGFloat arousal;
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat dominance;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat mood;
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (readonly) CGFloat valence;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMood:(CGFloat)arg0 valence:(CGFloat)arg1 arousal:(CGFloat)arg2 dominance:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif