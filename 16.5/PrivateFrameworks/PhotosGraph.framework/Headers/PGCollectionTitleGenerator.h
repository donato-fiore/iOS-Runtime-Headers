// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCOLLECTIONTITLEGENERATOR_H
#define PGCOLLECTIONTITLEGENERATOR_H

@class PHAssetCollection, PHAsset, NSSet;
@protocol PGEventEnrichment;

#import <Foundation/Foundation.h>

#import "PGTitleGenerationContext.h"
#import "PGTitleTuple.h"

@interface PGCollectionTitleGenerator : NSObject {
    PGTitleGenerationContext *_titleGenerationContext;
}


@property (retain, nonatomic) NSObject<PGEventEnrichment> *collection; // ivar: _collection
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection; // ivar: _curatedAssetCollection
@property (nonatomic) BOOL forDiagnostics; // ivar: _forDiagnostics
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) PGTitleTuple *titleTuple; // ivar: _titleTuple
@property (retain, nonatomic) NSSet *whitelistedMeaningLabels; // ivar: _whitelistedMeaningLabels


-(id)_meaningLabelForTitle;
-(id)_sortedMeaningLabels;
-(id)initWithCollection:(id)arg0 titleGenerationContext:(id)arg1 ;
-(id)initWithCollection:(id)arg0 whitelistedMeaningLabels:(id)arg1 titleGenerationContext:(id)arg2 ;
-(void)_generateTitleTuples;


@end


#endif