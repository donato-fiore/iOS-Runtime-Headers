// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSPEECHUTTERANCERESULT_H
#define SNSPEECHUTTERANCERESULT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNTimeRangeProviding, SNConfidenceProviding;

#import <Foundation/Foundation.h>


@interface SNSpeechUtteranceResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNTimeRangeProviding, SNConfidenceProviding>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL detected; // ivar: _detected
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpeechUtteranceResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif