// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKRESULTVIEW_H
#define _MKRESULTVIEW_H

@class UIView, NSArray, NSMutableArray, NSString, NSTimer, UIImageView, UIColor, CLLocation;
@protocol MKLocationManagerObserver, _MKResultViewDelegate;


#import "MKLocationManager.h"
#import "MKMapItem.h"
#import "_MKUILabel.h"

@interface _MKResultView : UIView <MKLocationManagerObserver>

 {
    NSArray *_mapItems;
    int _layoutType;
    id<_MKResultViewDelegate> *delegate;
    BOOL _selected;
    BOOL _showsDistance;
    NSMutableArray *_resultConstraints;
    MKLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    NSTimer *_refLocationTimer;
}


@property (nonatomic) BOOL alwaysUsesBusinessLayout; // ivar: _alwaysUsesBusinessLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_MKResultViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fallbackDistance; // ivar: _fallbackDistance
@property (readonly) NSUInteger hash;
@property (nonatomic) int iconFormat; // ivar: _iconFormat
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) NSArray *mapItems;
@property (retain, nonatomic) _MKUILabel *nameLabel; // ivar: _nameLabel
@property (readonly, nonatomic) CGFloat preferredHeight;
@property (retain, nonatomic) NSString *primaryLabelText;
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) CLLocation *referenceLocation; // ivar: _referenceLocation
@property (retain, nonatomic) _MKUILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) NSString *secondaryLabelText;
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showsDistance;
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKUILabel *tertiaryLabel; // ivar: _tertiaryLabel
@property (nonatomic) BOOL useSpotlightVibrancy; // ivar: _useSpotlightVibrancy


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(CGFloat)_expectedHeightForLabels;
-(NSUInteger)_maxNameLengthForEndingString:(id)arg0 ;
-(NSUInteger)_maxSecondaryStringLengthForEndingString:(id)arg0 ;
-(id)_defaultPrimaryLabel;
-(id)_defaultSecondaryCategoryLabel;
-(id)_labelWithFontSize:(CGFloat)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 highlightsOnTouch:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithMapItems:(id)arg0 primaryLabelText:(id)arg1 ;
-(struct CGSize )_imageSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelReferenceLocationTimer;
-(void)_commonInit;
-(void)_contentSizeCategoryDidChange;
-(void)_fireReferenceLocationTimer;
-(void)_locationApprovalDidChange;
-(void)_updateColors;
-(void)_updateFontSizing;
-(void)_updateLayoutForAddress;
-(void)_updateLayoutForBusinessOrCategory;
-(void)_updatePrimaryColors;
-(void)_updateSecondaryColors;
-(void)addLabelIfNecessary:(id)arg0 ;
-(void)dealloc;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)setNeedsUpdateConstraints;
-(void)updateConstraints;
-(void)updateImageView;
-(void)updateLayout;
-(void)updateSubviews;


@end


#endif