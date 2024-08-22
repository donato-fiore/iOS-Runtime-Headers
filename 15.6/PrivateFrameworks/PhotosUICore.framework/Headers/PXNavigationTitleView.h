// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNAVIGATIONTITLEVIEW_H
#define PXNAVIGATIONTITLEVIEW_H

@class UIView, NSArray, UILabel, NSString, UIFont, UIColor;
@protocol PXPhotosDetailsBarsContentView;



@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
}


@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // ivar: __constraints
@property (readonly, nonatomic) UILabel *_subtitleLabel; // ivar: __subtitleLabel
@property (nonatomic, getter=_isSubtitleVisible, setter=_setSubtitleVisible:) BOOL _subtitleVisible; // ivar: __subtitleVisible
@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setMargins:) UIEdgeInsets margins; // ivar: _margins
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (retain, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (nonatomic) CGFloat subviewsAlpha; // ivar: _subviewsAlpha
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (nonatomic) NSInteger verticalSizeClass; // ivar: _verticalSizeClass


-(BOOL)_needsUpdate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateConstraints;
-(void)_invalidateFonts;
-(void)_invalidateSize;
-(void)_invalidateTexts;
-(void)_setNeedsUpdate;
-(void)_updateConstraintsIfNeeded;
-(void)_updateFontsIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateSizeIfNeeded;
-(void)_updateTextsIfNeeded;
-(void)performChanges:(id)arg0 ;
-(void)updateConstraints;


@end


#endif