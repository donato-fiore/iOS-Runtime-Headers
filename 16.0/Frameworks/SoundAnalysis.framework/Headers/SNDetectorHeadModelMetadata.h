// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNDETECTORHEADMODELMETADATA_H
#define SNDETECTORHEADMODELMETADATA_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SNDetectorHeadModelMetadata : NSObject <NSCopying>



@property (copy) NSString *featureExtractorIdentifier; // ivar: _featureExtractorIdentifier
@property (copy) NSNumber *hopSizeInSamples; // ivar: _hopSizeInSamples
@property (copy) NSNumber *sampleRate; // ivar: _sampleRate
@property (copy) NSString *soundIdentifier; // ivar: _soundIdentifier
@property (copy) NSNumber *windowSizeInSamples; // ivar: _windowSizeInSamples


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif