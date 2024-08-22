// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFEATUREEXTRACTOR_H
#define PGFEATUREEXTRACTOR_H

@class MAFeatureExtractor, NSString;
@protocol PGFeatureExtractorProtocol;



@interface PGFeatureExtractor : MAFeatureExtractor <PGFeatureExtractorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger featureLength; // ivar: featureLength
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)featureExtractor;


@end


#endif