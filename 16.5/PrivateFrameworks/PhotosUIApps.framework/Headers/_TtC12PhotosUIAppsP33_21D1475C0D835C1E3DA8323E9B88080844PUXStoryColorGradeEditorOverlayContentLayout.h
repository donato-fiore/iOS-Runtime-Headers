// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12PHOTOSUIAPPSP33_21D1475C0D835C1E3DA8323E9B88080844PUXSTORYCOLORGRADEEDITOROVERLAYCONTENTLAYOUT_H
#define _TTC12PHOTOSUIAPPSP33_21D1475C0D835C1E3DA8323E9B88080844PUXSTORYCOLORGRADEEDITOROVERLAYCONTENTLAYOUT_H

@class PXGAbsoluteCompositeLayout;
@protocol PXGSublayoutProvider;



@interface _TtC12PhotosUIAppsP33_21D1475C0D835C1E3DA8323E9B88080844PUXStoryColorGradeEditorOverlayContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider>

 {
    ? viewModel;
    ? selectionSpritesIndexRange;
    ? sublayoutFrames;
    ? previewClip;
    ? previewClipTimeRange;
    ? captionHeightsByRow;
    ? storyModelObservation;
    ? viewModelObservation;
    ? updateFlags;
    ? hasVerticalScrollingContent;
}


@property (nonatomic, readonly) NSInteger scrollableAxis;


-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)init;
-(id)initWithComposition:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(void)referenceSizeDidChange;
-(void)update;


@end


#endif