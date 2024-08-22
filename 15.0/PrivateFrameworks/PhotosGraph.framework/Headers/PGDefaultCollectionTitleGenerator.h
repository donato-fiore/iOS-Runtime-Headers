// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGDEFAULTCOLLECTIONTITLEGENERATOR_H
#define PGDEFAULTCOLLECTIONTITLEGENERATOR_H

@class PHAssetCollection, PHAsset;
@protocol PGEventEnrichment;


#import "PGTitleGenerator.h"

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) NSObject<PGEventEnrichment> *collection; // ivar: _collection
@property (readonly, nonatomic) PHAssetCollection *curatedAssetCollection; // ivar: _curatedAssetCollection
@property (nonatomic, getter=isDebug) BOOL debug; // ivar: _debug
@property (nonatomic) BOOL forDiagnostics; // ivar: _forDiagnostics
@property (readonly, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset


-(void)_generateTitleAndSubtitleWithManager:(id)arg0 curationContext:(id)arg1 result:(id)arg2 ;


@end


#endif