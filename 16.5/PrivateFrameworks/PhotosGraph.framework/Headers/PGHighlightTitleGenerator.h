// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGHIGHLIGHTTITLEGENERATOR_H
#define PGHIGHLIGHTTITLEGENERATOR_H

@class PHAssetCollection, PHAsset;
@protocol PGEventEnrichment;

#import <Foundation/Foundation.h>

#import "PGTitleGenerationContext.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGTitleTuple.h"

@interface PGHighlightTitleGenerator : NSObject {
    PGTitleGenerationContext *_titleGenerationContext;
}


@property (retain, nonatomic) NSObject<PGEventEnrichment> *collection; // ivar: _collection
@property (nonatomic) BOOL createVerboseTitle; // ivar: _createVerboseTitle
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection; // ivar: _curatedAssetCollection
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) PGGraphMomentNodeCollection *momentNodes; // ivar: _momentNodes
@property (retain, nonatomic) PGTitleTuple *titleTuple; // ivar: _titleTuple


+(id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg0 ;
+(id)meaningLabelsSortedByPriority;
-(void)_generateTitleTuples;


@end


#endif