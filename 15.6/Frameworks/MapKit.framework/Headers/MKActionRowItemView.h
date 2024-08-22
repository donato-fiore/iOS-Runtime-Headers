// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKACTIONROWITEMVIEW_H
#define MKACTIONROWITEMVIEW_H

@class UIButton, UIImageView, UIView, NSArray;
@protocol MKActionRowItemViewDelegate;


#import "_MKUILabel.h"
#import "MKVibrantView.h"
#import "MKPlaceCardActionItem.h"

@interface MKActionRowItemView : UIButton {
    _MKUILabel *_label;
    UIImageView *_glyphImageView;
    MKVibrantView *_vibrantView;
    UIView *_backgroundView;
    NSUInteger _style;
    NSArray *_constraints;
}


@property (retain, nonatomic) MKPlaceCardActionItem *actionRowItem; // ivar: _actionRowItem
@property (weak, nonatomic) NSObject<MKActionRowItemViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fullWidthMode; // ivar: _fullWidthMode
@property (nonatomic) BOOL hovering; // ivar: _hovering
@property (nonatomic) BOOL showSelectedState; // ivar: _showSelectedState
@property (nonatomic) BOOL touched; // ivar: _touched


+(CGFloat)minWidthForString:(id)arg0 forSize:(id)arg1 ;
+(CGFloat)widthBrandItem;
+(id)glyphFont;
+(id)labelFont;
+(id)widthDictionary;
-(id)initWithActionRowItem:(id)arg0 menuElement:(id)arg1 style:(NSUInteger)arg2 ;
-(void)_contentSizeDidChange;
-(void)_touchBegan;
-(void)_touchCancelled;
-(void)_touchEnded;
-(void)createConstraints;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)handleHoverGesture:(id)arg0 ;
-(void)handlePress;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateColor;
-(void)updateImage;


@end


#endif