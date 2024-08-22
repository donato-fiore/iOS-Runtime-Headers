// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGHIGHLIGHTITEMMODELMANAGER_H
#define PGHIGHLIGHTITEMMODELMANAGER_H

@class NSMutableDictionary, NSString, PHPhotoLibrary;
@protocol PGHighlightItemModelReader, PGHighlightItemListModelWriter;

#import <Foundation/Foundation.h>


@interface PGHighlightItemModelManager : NSObject <PGHighlightItemModelReader, PGHighlightItemListModelWriter>



@property (readonly, nonatomic) NSMutableDictionary *contextualKeyAssetMixedByHighlighItemUUID; // ivar: _contextualKeyAssetMixedByHighlighItemUUID
@property (readonly, nonatomic) NSMutableDictionary *contextualKeyAssetPrivateByHighlighItemUUID; // ivar: _contextualKeyAssetPrivateByHighlighItemUUID
@property (readonly, nonatomic) NSMutableDictionary *contextualKeyAssetSharedByHighlighItemUUID; // ivar: _contextualKeyAssetSharedByHighlighItemUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *visibilityStateMixedByHighlighItemUUID; // ivar: _visibilityStateMixedByHighlighItemUUID
@property (readonly, nonatomic) NSMutableDictionary *visibilityStatePrivateByHighlighItemUUID; // ivar: _visibilityStatePrivateByHighlighItemUUID
@property (readonly, nonatomic) NSMutableDictionary *visibilityStateSharedByHighlighItemUUID; // ivar: _visibilityStateSharedByHighlighItemUUID


-(id)_contextualKeyAssetByHighlighItemUUIDForHighlightFilter:(unsigned short)arg0 ;
-(id)_visibilityStateByHighlighItemUUIDForHighlightFilter:(unsigned short)arg0 ;
-(id)contextualKeyAssetForHighlightItem:(id)arg0 sharingFilter:(unsigned short)arg1 ;
-(id)fetchChildHighlightItemsForHighlightItem:(id)arg0 sharingFilter:(unsigned short)arg1 ;
-(id)fetchParentHighlightItemsForHighlightItems:(id)arg0 ;
-(id)highlightUUIDsWithContextualKeyAssetChange;
-(id)highlightUUIDsWithVisibilityStateChange;
-(id)initForTesting;
-(id)initWithLibrary:(id)arg0 ;
-(unsigned short)visibilityStateForHighlightItem:(id)arg0 sharingFilter:(unsigned short)arg1 ;
-(void)addVisibleHighlight:(id)arg0 inMonth:(id)arg1 withHighlightFilter:(unsigned short)arg2 ;
-(void)commonInit;
-(void)consumeHighlightItemList:(id)arg0 ;
-(void)setContextualKeyAsset:(id)arg0 forHighlightItem:(id)arg1 sharingFilter:(unsigned short)arg2 ;
-(void)setVisibilityState:(unsigned short)arg0 forHighlightItem:(id)arg1 sharingFilter:(unsigned short)arg2 ;
-(void)setVisibilityState:(unsigned short)arg0 forHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2 ;


@end


#endif