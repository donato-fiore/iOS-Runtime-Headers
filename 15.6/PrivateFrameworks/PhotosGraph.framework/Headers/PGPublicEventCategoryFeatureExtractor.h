// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPUBLICEVENTCATEGORYFEATUREEXTRACTOR_H
#define PGPUBLICEVENTCATEGORYFEATUREEXTRACTOR_H



#import "PGGraphFeatureExtractor.h"

@interface PGPublicEventCategoryFeatureExtractor : PGGraphFeatureExtractor



-(id)initWithError:(*id)arg0 ;
-(id)initWithVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(id)labelProcessingForVersion:(NSInteger)arg0 label:(id)arg1 ;
-(id)labelsForVersion:(NSInteger)arg0 ;
-(id)prefix;


@end


#endif