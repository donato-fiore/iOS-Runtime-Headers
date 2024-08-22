// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKQUICKLINKITEMVIEW_H
#define MKQUICKLINKITEMVIEW_H

@class UIView, UIImageView, NSArray, NSLayoutConstraint, GEOAppStoreAppClip, GEOQuickLink;
@protocol MKQuickLinkItemViewDelegate;


#import "_MKUILabel.h"
#import "MKVibrantView.h"

@interface MKQuickLinkItemView : UIView {
    _MKUILabel *_label;
    _MKUILabel *_appLabel;
    MKVibrantView *_vibrantView;
    UIImageView *_appImageView;
    NSArray *_constraints;
    NSLayoutConstraint *_topToFirstBaseline;
    NSLayoutConstraint *_lastToFirstBaseline;
    NSLayoutConstraint *_lastToBotomBaseline;
}


@property (retain, nonatomic) GEOAppStoreAppClip *appClip; // ivar: _appClip
@property (weak, nonatomic) NSObject<MKQuickLinkItemViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) GEOQuickLink *quickLink; // ivar: _quickLink
@property (nonatomic) BOOL touched; // ivar: _touched


+(CGFloat)minWidthForString:(id)arg0 forSize:(id)arg1 ;
+(CGFloat)widthBrandItem;
+(id)appLabelFont;
+(id)labelFont;
+(id)widthDictionary;
-(id)initWithQuickLink:(id)arg0 ;
-(void)_contentSizeDidChange;
-(void)_createConstraints;
-(void)_loadAppArtwork:(id)arg0 ;
-(void)_loadAppClip;
-(void)_loadAppClipArtwork:(id)arg0 bundleID:(id)arg1 ;
-(void)_loadFallBackApp;
-(void)_loadOfficialApp;
-(void)didMoveToWindow;
-(void)infoCardThemeChanged;
-(void)preferredContentSizeChanged:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateColor;


@end


#endif