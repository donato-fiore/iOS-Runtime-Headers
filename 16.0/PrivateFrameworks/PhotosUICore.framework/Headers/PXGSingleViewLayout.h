// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGSINGLEVIEWLAYOUT_H
#define PXGSINGLEVIEWLAYOUT_H

@class NSIndexSet, UIView, NSString;
@protocol PXGViewSource, PXGSingleViewLayoutDelegate;


#import "PXGLayout.h"
#import "PXGSpriteReference.h"

@interface PXGSingleViewLayout : PXGLayout <PXGViewSource>

 {
    ? _updateFlags;
    unsigned short _contentSpriteMediaVersion;
    NSIndexSet *_axSpriteIndexes;
}


@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) Class contentViewClass; // ivar: _contentViewClass
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGSingleViewLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXGSpriteReference *viewSpriteReference;
@property (nonatomic) float zPosition; // ivar: _zPosition


-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateContent;
-(void)_invalidateMediaVersion;
-(void)_updateContent;
-(void)alphaDidChange;
-(void)dealloc;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;
-(void)viewContentDidChange;
-(void)viewSizeDidChange;


@end


#endif