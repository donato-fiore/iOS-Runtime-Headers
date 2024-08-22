// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12PHOTOSUIAPPS37PUXSTORYCOLORGRADEEDITORCONTENTLAYOUT_H
#define _TTC12PHOTOSUIAPPS37PUXSTORYCOLORGRADEEDITORCONTENTLAYOUT_H

@class PXGDecoratingLayout;
@protocol PXGSelectionDecorationSource;



@interface _TtC12PhotosUIApps37PUXStoryColorGradeEditorContentLayout : PXGDecoratingLayout <PXGSelectionDecorationSource>

 {
    ? viewModel;
    ? overlayLayout;
}




-(NSInteger)overallSelectionOrderAtSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)selectionDecorationStyleInLayout:(id)arg0 ;
-(NSUInteger)selectionDecorationAdditionsInLayout:(id)arg0 ;
-(id)init;
-(id)initWithDecoratedLayout:(id)arg0 ;
-(id)selectedSpriteIndexesInLayout:(id)arg0 ;


@end


#endif