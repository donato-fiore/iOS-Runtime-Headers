// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLLOCATIONBUTTON_H
#define CLLOCATIONBUTTON_H

@class UIControl, _UISlotView, UIColor, NSString, NSLayoutConstraint;
@protocol NSSecureCoding, LocationUIProtocol;



@interface CLLocationButton : UIControl <NSSecureCoding>

 {
    _UISlotView *_slotView;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    NSString *_sandboxExtension;
    CGSize _intrinsicSize;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    id<LocationUIProtocol> *_proxy;
}


@property (readonly, nonatomic) BOOL alphaInsufficient; // ivar: _alphaInsufficient
@property (readonly, nonatomic) BOOL colorsIllegible; // ivar: _colorsIllegible
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) NSInteger icon; // ivar: _icon
@property (nonatomic) NSInteger label; // ivar: _label
@property (readonly, nonatomic) NSObject<LocationUIProtocol> *locationUIProxy;


+(BOOL)supportsSecureCoding;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_computeLocationButtonTag;
-(id)backgroundColor;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tintColor;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(unsigned int)_secureName;
-(void)_actionForPreSetTarget;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_sendActionsForEvents:(NSUInteger)arg0 withEvent:(id)arg1 ;
-(void)_setupSlotView;
-(void)_yieldSlotViewContentForLayerContextID:(NSUInteger)arg0 slotStyle:(id)arg1 withYieldBlock:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)markDirty;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;


@end


#endif