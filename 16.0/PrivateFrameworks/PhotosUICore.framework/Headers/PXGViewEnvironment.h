// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGVIEWENVIRONMENT_H
#define PXGVIEWENVIRONMENT_H

@class UIColor, UITraitCollection;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGViewEnvironment : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL accessibilityEnabled; // ivar: _accessibilityEnabled
@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) BOOL emphasized; // ivar: _emphasized
@property (readonly, nonatomic) *CGColor selectionHighlightColor; // ivar: _selectionHighlightColor
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (readonly, nonatomic) BOOL wantsFocusRing; // ivar: _wantsFocusRing


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithView:(id)arg0 accessibilityEnabled:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif