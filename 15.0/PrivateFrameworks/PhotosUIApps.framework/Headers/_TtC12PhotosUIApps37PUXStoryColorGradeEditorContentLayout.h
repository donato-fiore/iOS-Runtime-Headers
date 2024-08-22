// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12PHOTOSUIAPPS37PUXSTORYCOLORGRADEEDITORCONTENTLAYOUT_H
#define _TTC12PHOTOSUIAPPS37PUXSTORYCOLORGRADEEDITORCONTENTLAYOUT_H

@class PXGAbsoluteCompositeLayout;
@protocol PXGSublayoutProvider;



@interface _TtC12PhotosUIApps37PUXStoryColorGradeEditorContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider>

 {
    ? viewModel;
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
-(void)visibleRectDidChange;


@end


#endif