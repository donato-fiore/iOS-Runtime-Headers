// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMPONENT_H
#define CSCOMPONENT_H

@class UIColor, NSString, _UILegibilitySettings, NSNumber, UIView;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CSComponent : NSObject <NSCopying>



@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSInteger flag; // ivar: _flag
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSUInteger level; // ivar: _level
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSUInteger properties; // ivar: _properties
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (nonatomic) ? transitionInputs; // ivar: _transitionInputs
@property (nonatomic) NSUInteger transitionModifiers; // ivar: _transitionModifiers
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSNumber *value; // ivar: _value
@property (retain, nonatomic) UIView *view; // ivar: _view


+(id)background;
+(id)backgroundContent;
+(id)complicationContainer;
+(id)componentWithType:(NSInteger)arg0 ;
+(id)content;
+(id)controlCenterGrabber;
+(id)dateView;
+(id)footerCallToActionLabel;
+(id)footerStatusLabel;
+(id)homeAffordance;
+(id)modalContent;
+(id)pageContent;
+(id)pageControl;
+(id)poseidon;
+(id)proudLock;
+(id)quickActions;
+(id)remoteInlineContent;
+(id)slideableContent;
+(id)statusBar;
+(id)statusBarBackground;
+(id)statusBarGradient;
+(id)tinting;
+(id)wallpaper;
+(id)wallpaperFloatingLayer;
+(id)whitePoint;
-(BOOL)hasValueForProperty:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)animationDuration:(CGFloat)arg0 ;
-(id)color:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)flag:(NSInteger)arg0 ;
-(id)hidden:(BOOL)arg0 ;
-(id)identifier:(id)arg0 ;
-(id)init;
-(id)legibilitySettings:(id)arg0 ;
-(id)offset:(struct CGPoint )arg0 ;
-(id)priority:(NSInteger)arg0 ;
-(id)scale:(CGFloat)arg0 ;
-(id)string:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)transitionInputs:(struct ? )arg0 ;
-(id)transitionModifiers:(NSUInteger)arg0 ;
-(id)value:(id)arg0 ;
-(id)view:(id)arg0 ;
-(void)resetAllProperties;


@end


#endif