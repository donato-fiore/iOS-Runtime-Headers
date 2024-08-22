// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSACAPTIONLAYOUT_H
#define TSACAPTIONLAYOUT_H

@class TSWPShapeLayout, TSDPathSource, NSString, TSDLayoutGeometry;
@protocol TSDWrappable, TSTTablePartitionerParticipating;



@interface TSACaptionLayout : TSWPShapeLayout <TSDWrappable, TSTTablePartitionerParticipating>

 {
    TSDPathSource *_layoutPathSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowsConnections;
-(BOOL)autosizes;
-(BOOL)isDraggable;
-(BOOL)isDynamicallyChangingAvailableSpaceForContainedChild;
-(BOOL)isInGroup;
-(BOOL)p_textIsCompletelyOverflowed;
-(BOOL)participatesInLastRowHeight;
-(BOOL)shouldValidate;
-(BOOL)supportsParentFlipping;
-(BOOL)supportsRotation;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg0 ;
-(BOOL)wantsNormalLayoutDuringDynamicRotation;
-(CGFloat)maxAutoGrowBlockHeightForTextLayout:(id)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_captionInfo;
-(id)p_captionLayout;
-(id)p_parentInfo;
-(id)p_parentLayout;
-(id)p_titleInfo;
-(id)p_titleLayout;
-(id)pathSource;
-(id)reliedOnLayouts;
-(id)reliedOnLayoutsForTextLayout:(id)arg0 ;
-(struct CGAffineTransform )computeLayoutTransform;
-(struct CGPoint )offsetForPlacement:(id)arg0 ;
-(struct CGPoint )p_pointInFrame:(struct CGRect )arg0 forAnchorLocation:(NSInteger)arg1 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGSize )p_sizeForProposedSize:(struct CGSize )arg0 zeroSize:(struct CGSize )arg1 ;
-(void)invalidate;
-(void)invalidatePath;
-(void)processChangedProperty:(int)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)validate;


@end


#endif