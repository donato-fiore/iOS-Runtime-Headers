// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAIRDROPGROUPACTIVITYCELL_H
#define UIAIRDROPGROUPACTIVITYCELL_H

@class UICollectionViewCell, NSString, NSUUID, UIImage, UIView, UIImageView, NSArray, UILabel, UIVisualEffectView;


#import "_UIAirDropProgressView.h"
#import "UIAirDropNode.h"

@interface UIAirDropGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) _UIAirDropProgressView *circleProgressView; // ivar: _circleProgressView
@property (readonly, nonatomic) CGFloat circleWidth; // ivar: _circleWidth
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) unsigned int imageSlotID; // ivar: _imageSlotID
@property (retain, nonatomic) UIView *imageSlotView; // ivar: _imageSlotView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isPulsing; // ivar: _isPulsing
@property (retain, nonatomic) NSArray *largeTextConstraints; // ivar: _largeTextConstraints
@property (retain, nonatomic) UIAirDropNode *node; // ivar: _node
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (nonatomic, getter=isSquareImage) BOOL squareImage; // ivar: _squareImage
@property (nonatomic) BOOL stateBeingRestored; // ivar: _stateBeingRestored
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSArray *subtitleLabelVisibleConstraintsArray; // ivar: _subtitleLabelVisibleConstraintsArray
@property (nonatomic) unsigned int subtitleSlotID; // ivar: _subtitleSlotID
@property (retain, nonatomic) UIView *subtitleSlotView; // ivar: _subtitleSlotView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic) unsigned int textSlotID; // ivar: _textSlotID
@property (retain, nonatomic) UIView *textSlotView; // ivar: _textSlotView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) unsigned int titleSlotID; // ivar: _titleSlotID
@property (retain, nonatomic) UIView *titleSlotView; // ivar: _titleSlotView
@property (nonatomic) unsigned int transportSlotID; // ivar: _transportSlotID
@property (retain, nonatomic) UIView *transportSlotView; // ivar: _transportSlotView
@property (retain, nonatomic) UIVisualEffectView *vibrantSubtitleView; // ivar: _vibrantSubtitleView
@property (retain, nonatomic) UIVisualEffectView *vibrantTitleView; // ivar: _vibrantTitleView


-(id)_createLabelForSingleLine:(BOOL)arg0 ;
-(id)_placeholderStringForSingleLine:(BOOL)arg0 ;
-(id)createTargetedPreview;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didCompleteAirDropProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_updateConstraints;
-(void)_updateDarkening;
-(void)_updateImageView;
-(void)_updateProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_updateSubtitleView;
-(void)_updateTextView;
-(void)_updateTitleView;
-(void)_updateTransportView;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTransportSlotHidden:(BOOL)arg0 animated:(BOOL)arg1 useDelay:(BOOL)arg2 ;
-(void)setupConstraints;
-(void)startPulsing;
-(void)stopPulsing;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif