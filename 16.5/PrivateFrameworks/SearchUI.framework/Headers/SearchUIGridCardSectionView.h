// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIGRIDCARDSECTIONVIEW_H
#define SEARCHUIGRIDCARDSECTIONVIEW_H

@class TLKImagesView, NSString, NSMapTable, NSMutableArray;
@protocol TLKImagesViewDelegate, UIContextMenuInteractionDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIGridCardSectionView : SearchUICardSectionView <TLKImagesViewDelegate, UIContextMenuInteractionDelegate>



@property (retain, nonatomic) TLKImagesView *contentView; // ivar: contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSMapTable *imageToRowModelMap; // ivar: _imageToRowModelMap
@property (retain) NSMutableArray *previewTargetDummyViews; // ivar: _previewTargetDummyViews
@property (readonly) Class superclass;


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)imageViewForInteraction:(id)arg0 ;
-(id)imagesInGrid:(id)arg0 ;
-(id)setupContentView;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)imagesView:(id)arg0 didSelectImage:(id)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif