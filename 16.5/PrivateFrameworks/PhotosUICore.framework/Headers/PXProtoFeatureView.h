// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPROTOFEATUREVIEW_H
#define PXPROTOFEATUREVIEW_H

@class UIView, UIImageView, NSString, UIColor;
@protocol PXProtoMutableFeatureView, PXProtoFeature;



@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
}


@property (readonly, nonatomic) UIImageView *_removeIconView; // ivar: __removeIconView
@property (readonly, nonatomic) CGSize compactContentSize;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly, nonatomic) NSObject<PXProtoFeature> *feature; // ivar: _feature
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets minimumMargins; // ivar: _minimumMargins
@property (readonly, nonatomic) UIColor *preferredBackgroundColor;
@property (readonly, nonatomic) CGFloat recommendedCompactContentHeight;
@property (readonly, nonatomic) CGSize regularContentSize;
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) BOOL shouldUpdateContentOnResize; // ivar: _shouldUpdateContentOnResize
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsContentView;


-(BOOL)_needsUpdate;
-(BOOL)canBecomeFocused;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )_contentInsets;
-(void)_invalidateContent;
-(void)_setNeedsUpdate;
-(void)_updateContentIfNeeded;
-(void)_updateIfNeeded;
-(void)layoutSubviews;
-(void)performChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateContent;


@end


#endif