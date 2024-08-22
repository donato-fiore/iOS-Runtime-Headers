// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSEARCH_H
#define PHSEARCH_H


#import <Foundation/Foundation.h>


@interface PHSearch : NSObject



+(id)spotlightContentRatingFromPhotosSceneClassifications:(id)arg0 algorithmVersion:(NSInteger)arg1 ;
+(id)spotlightSceneClassificationsFromPhotosSceneClassifications:(id)arg0 algorithmVersion:(NSInteger)arg1 ;
+(id)spotlightTextLinesFromDocumentObservation:(id)arg0 algorithmVersion:(NSInteger)arg1 ;


@end


#endif