// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12PHOTOSUIAPPS34PUXSTORYCOLORGRADEEDITORITEMLAYOUT_H
#define _TTC12PHOTOSUIAPPS34PUXSTORYCOLORGRADEEDITORITEMLAYOUT_H

@class PXGAbsoluteCompositeLayout;



@interface _TtC12PhotosUIApps34PUXStoryColorGradeEditorItemLayout : PXGAbsoluteCompositeLayout {
    ? colorGradeKind;
    ? viewModel;
    ? clipLayout;
    ? clipLayoutIndex;
    ? overlayLayout;
    ? overlayLayoutIndex;
    ? previewMode;
    ? updateFlags;
    ? clip;
    ? clipTimeRange;
    ? captionHeight;
}




-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)init;
-(id)initWithComposition:(id)arg0 ;
-(void)referenceSizeDidChange;
-(void)update;


@end


#endif