// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFFECTDATASOURCE_H
#define EFFECTDATASOURCE_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol ItemStylePickerDataSource;

#import <Foundation/Foundation.h>


@interface EffectDataSource : NSObject <ItemStylePickerDataSource>



@property (retain, nonatomic) NSMutableDictionary *allFilterDirtyPreviewsDict; // ivar: _allFilterDirtyPreviewsDict
@property (retain, nonatomic) NSMutableArray *allFilterIDsArray; // ivar: _allFilterIDsArray
@property (retain, nonatomic) NSMutableDictionary *allFilterNamesDict; // ivar: _allFilterNamesDict
@property (retain, nonatomic) NSMutableDictionary *allFilterPreviewsDict; // ivar: _allFilterPreviewsDict
@property (retain, nonatomic) NSMutableDictionary *allGeneratorDirtyPreviewsDict; // ivar: _allGeneratorDirtyPreviewsDict
@property (retain, nonatomic) NSMutableArray *allGeneratorIDsArray; // ivar: _allGeneratorIDsArray
@property (retain, nonatomic) NSMutableDictionary *allGeneratorNamesDict; // ivar: _allGeneratorNamesDict
@property (retain, nonatomic) NSMutableDictionary *allGeneratorPreviewsDict; // ivar: _allGeneratorPreviewsDict
@property (retain, nonatomic) NSMutableDictionary *allTitleDirtyPreviewsDict; // ivar: _allTitleDirtyPreviewsDict
@property (retain, nonatomic) NSMutableArray *allTitleIDsArray; // ivar: _allTitleIDsArray
@property (retain, nonatomic) NSMutableDictionary *allTitleNamesDict; // ivar: _allTitleNamesDict
@property (retain, nonatomic) NSMutableDictionary *allTitlePreviewsDict; // ivar: _allTitlePreviewsDict
@property (retain, nonatomic) NSMutableDictionary *allTransitionDirtyPreviewsDict; // ivar: _allTransitionDirtyPreviewsDict
@property (retain, nonatomic) NSMutableArray *allTransitionIDsArray; // ivar: _allTransitionIDsArray
@property (retain, nonatomic) NSMutableDictionary *allTransitionNamesDict; // ivar: _allTransitionNamesDict
@property (retain, nonatomic) NSMutableDictionary *allTransitionPreviewsDict; // ivar: _allTransitionPreviewsDict
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *factoryFilterIDsArray; // ivar: _factoryFilterIDsArray
@property (retain, nonatomic) NSMutableDictionary *factoryFilterInternalNamesDict; // ivar: _factoryFilterInternalNamesDict
@property (retain, nonatomic) NSMutableDictionary *factoryFilterNamesDict; // ivar: _factoryFilterNamesDict
@property (retain, nonatomic) NSMutableArray *factoryGeneratorIDsArray; // ivar: _factoryGeneratorIDsArray
@property (retain, nonatomic) NSMutableDictionary *factoryGeneratorNamesDict; // ivar: _factoryGeneratorNamesDict
@property (retain, nonatomic) NSMutableArray *factoryTitleIDsArray; // ivar: _factoryTitleIDsArray
@property (retain, nonatomic) NSMutableDictionary *factoryTitleInternalNamesDict; // ivar: _factoryTitleInternalNamesDict
@property (retain, nonatomic) NSMutableDictionary *factoryTitleNamesDict; // ivar: _factoryTitleNamesDict
@property (retain, nonatomic) NSMutableArray *factoryTransitionIDsArray; // ivar: _factoryTransitionIDsArray
@property (retain, nonatomic) NSMutableDictionary *factoryTransitionNamesDict; // ivar: _factoryTransitionNamesDict
@property int filterClientRefCount; // ivar: _filterClientRefCount
@property (nonatomic, getter=isGeneratingThumbs) BOOL generatingThumbs; // ivar: _generatingThumbs
@property (nonatomic, getter=isGeneratingThumbsInterrupted) BOOL generatingThumbsInterrupted; // ivar: _generatingThumbsInterrupted
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDataSource;
-(NSInteger)numberOfItems;
-(id)effectsForType:(id)arg0 ;
-(id)getAllFilterIDs;
-(id)getAllFilterNames;
-(id)getAllGeneratorIDs;
-(id)getAllGeneratorNames;
-(id)getAllTitleIDs;
-(id)getAllTitleNames;
-(id)getAllTransitionIDs;
-(id)getAllTransitionNames;
-(id)getEffectIDsForType:(id)arg0 ;
-(id)getEffectNamesForType:(id)arg0 ;
-(id)getFactoryFilterIDs;
-(id)getFactoryFilterInternalNames;
-(id)getFactoryFilterNames;
-(id)getFactoryTitleIDs;
-(id)getFactoryTitleInternalNames;
-(id)getFactoryTitleNames;
-(id)getFactoryTransitionIDs;
-(id)getFactoryTransitionInternalNames;
-(id)getFactoryTransitionNames;
-(id)getPreviewImageForFilterID:(id)arg0 ;
-(id)getPreviewImageForTitleID:(id)arg0 ;
-(id)indexPathOfItemID:(id)arg0 ;
-(id)indexPathOfItemName:(id)arg0 ;
-(id)init;
-(id)itemIDAtIndexPath:(id)arg0 ;
-(id)itemNameAtIndexPath:(id)arg0 ;
-(void)dirtyAllFilterPreviewsIncludingNone:(BOOL)arg0 ;
-(void)dirtyAllTitlePreviewsIncludingNone:(BOOL)arg0 ;
-(void)generateAllFilterPreviewsAtTime:(struct ? )arg0 effectRange:(struct ? )arg1 rawImage:(id)arg2 previewSize:(struct CGSize )arg3 ;
-(void)generatePreviewImageForEffectID:(id)arg0 currentTime:(struct ? )arg1 effectRange:(struct ? )arg2 rawImage:(id)arg3 previewSize:(struct CGSize )arg4 completion:(id)arg5 ;
-(void)initAllEffectPreviewsForImage:(id)arg0 effectType:(id)arg1 ;
-(void)initAllFilterPreviewsForImage:(id)arg0 ;
-(void)initAllTitlePreviewsForImage:(id)arg0 ;
-(void)releaseAllFilterPreviewsIncludingNone:(BOOL)arg0 ;
-(void)releaseAllTitlePreviewsIncludingNone:(BOOL)arg0 ;


@end


#endif