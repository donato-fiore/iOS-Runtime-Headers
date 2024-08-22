// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHFEATUREEXTRACTOR_H
#define PGGRAPHFEATUREEXTRACTOR_H

@class MARelationCollectionFeatureExtractor, NSString;
@protocol PGGraphFeatureExtractorProtocol;



@interface PGGraphFeatureExtractor : MARelationCollectionFeatureExtractor <PGGraphFeatureExtractorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)featureExtractorWithError:(*id)arg0 ;
-(id)initWithError:(*id)arg0 ;


@end


#endif