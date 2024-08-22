// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUXSTORYCOLORGRADEEDITORITEMOVERLAYLAYOUT_H
#define PUXSTORYCOLORGRADEEDITORITEMOVERLAYLAYOUT_H

@class PXGLayout, NSIndexSet;
@protocol PXGStringSource, PXGNamedImageSource, PXGSolidColorSource;



@interface PUXStoryColorGradeEditorItemOverlayLayout : PXGLayout <PXGStringSource, PXGNamedImageSource, PXGSolidColorSource>

 {
    ? colorGradeKind;
    ? viewModel;
    ? backgroundSpriteIndex;
    ? captionSpriteIndex;
    ? selectionBadgeSpriteIndex;
    ? accessibleSpriteIndexes;
    ? updateFlags;
    ? captionHeight;
}


@property (nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;


-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;


@end


#endif