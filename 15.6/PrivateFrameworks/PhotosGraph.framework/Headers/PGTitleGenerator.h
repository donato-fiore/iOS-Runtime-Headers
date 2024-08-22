// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTITLEGENERATOR_H
#define PGTITLEGENERATOR_H

@class PHAssetCollection, PHAsset, NSLocale, NSSet;

#import <Foundation/Foundation.h>

#import "PGTitleGeneratorDateMatching.h"
#import "PGGraphYearNodeCollection.h"
#import "PGTitle.h"
#import "PGTitleGenerationContext.h"

@interface PGTitleGenerator : NSObject

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PHAssetCollection *curatedAssetCollection; // ivar: _curatedAssetCollection
@property (readonly, nonatomic) PGTitleGeneratorDateMatching *dateMatching; // ivar: _dateMatching
@property (retain, nonatomic) PGGraphYearNodeCollection *featuredYearNodes; // ivar: _featuredYearNodes
@property (nonatomic) BOOL isForHighlight; // ivar: _isForHighlight
@property (readonly, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (nonatomic) NSUInteger lineBreakBehavior; // ivar: _lineBreakBehavior
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (nonatomic) NSUInteger preferredTitleType; // ivar: _preferredTitleType
@property (readonly, nonatomic) PGTitle *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) PGTitle *title; // ivar: _title
@property (readonly, nonatomic) PGTitleGenerationContext *titleGenerationContext; // ivar: _titleGenerationContext
@property (retain, nonatomic) NSSet *usedLocationNodes; // ivar: _usedLocationNodes


-(BOOL)_triggerDefaultTitleGenerationIfNil;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(NSUInteger)_allowedTimeTitleFormats;
-(id)_addressNodeFromKeyAsset;
-(id)_addressNodesFromCuratedAssetCollection;
-(id)_defaultLocationTitle;
-(id)_defaultTimeTitle;
-(id)_defaultTitle;
-(id)_splitTimeTitles;
-(id)initWithMomentNode:(id)arg0 referenceDateInterval:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 assetCollection:(id)arg4 type:(NSInteger)arg5 titleGenerationContext:(id)arg6 ;
-(id)initWithMomentNode:(id)arg0 type:(NSInteger)arg1 titleGenerationContext:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg0 referenceDateInterval:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 assetCollection:(id)arg4 type:(NSInteger)arg5 titleGenerationContext:(id)arg6 ;
-(id)initWithMomentNodes:(id)arg0 type:(NSInteger)arg1 titleGenerationContext:(id)arg2 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif