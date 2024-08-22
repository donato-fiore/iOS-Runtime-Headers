// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNDETECTSIGNALTHRESHOLDREQUEST_H
#define SNDETECTSIGNALTHRESHOLDREQUEST_H

@class NSString;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>

#import "SNDetectSignalThresholdRequestImpl.h"

@interface SNDetectSignalThresholdRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

 {
    SNDetectSignalThresholdRequestImpl *_detector;
}


@property (nonatomic) unsigned int blockSize; // ivar: _blockSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat magnitudeThreshold; // ivar: _magnitudeThreshold
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif