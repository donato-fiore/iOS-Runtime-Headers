// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPHOTOSHIGHLIGHTITEMMODELMANAGER_H
#define PGPHOTOSHIGHLIGHTITEMMODELMANAGER_H

@class NSString, NSSet, PHPhotoLibrary, NSMutableDictionary;
@protocol PGHighlightItemModelReader, PGHighlightItemListModelWriter;

#import <Foundation/Foundation.h>


@interface PGPhotosHighlightItemModelManager : NSObject <PGHighlightItemModelReader, PGHighlightItemListModelWriter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *highlightUUIDsWithVisibilityStateChange;
@property (readonly, nonatomic) unsigned short kind; // ivar: _kind
@property (readonly, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *visibilityStateByDayHighlighItemUUID; // ivar: _visibilityStateByDayHighlighItemUUID


-(id)consumeHighlightItemList:(id)arg0 ;
-(id)fetchChildHighlightItemsForHighlightItem:(id)arg0 ;
-(id)fetchParentHighlightItemsForHighlightItems:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 forKind:(unsigned short)arg1 ;
-(unsigned short)visibilityStateForHighlightItem:(id)arg0 ;
-(void)addVisibleHighlight:(id)arg0 inMonth:(id)arg1 ;
-(void)setVisibilityState:(unsigned short)arg0 forHighlightItem:(id)arg1 ;


@end


#endif