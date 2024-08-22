// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCLIPQUERYASSETFILTER_H
#define PGCLIPQUERYASSETFILTER_H

@class NSDictionary, NSString, NSArray;
@protocol PGAssetFilter;

#import <Foundation/Foundation.h>


@interface PGCLIPQueryAssetFilter : NSObject <PGAssetFilter>



@property (readonly, nonatomic) NSDictionary *cosineSimilarityThresholdByVersion; // ivar: _cosineSimilarityThresholdByVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *positiveQueryEmbeddings; // ivar: _positiveQueryEmbeddings
@property (readonly) Class superclass;


+(id)name;
-(BOOL)passesWithAsset:(id)arg0 ;
-(CGFloat)cosineSimilarityBetweenQueryEmbedding:(id)arg0 assetEmbedding:(id)arg1 ;
-(id)filteredAssetsFromAssets:(id)arg0 ;
-(id)initWithPositiveQueryEmbeddings:(id)arg0 cosineSimilarityThresholdByVersion:(id)arg1 ;


@end


#endif