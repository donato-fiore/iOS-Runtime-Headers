// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARSTYLEREQUEST_H
#define UISTATUSBARSTYLEREQUEST_H

@class NSNumber;
@protocol NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying>



@property (readonly, nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (readonly, retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly, nonatomic) NSInteger legibilityStyle; // ivar: _legibilityStyle
@property (readonly, retain, nonatomic) NSNumber *overrideHeight; // ivar: _overrideHeight
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(BOOL)isDoubleHeight;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLegacy;
-(BOOL)isTranslucent;
-(NSUInteger)hash;
-(id)_copyWithZone:(struct _NSZone *)arg0 class:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 legacy:(BOOL)arg1 legibilityStyle:(NSInteger)arg2 foregroundColor:(id)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 legacy:(BOOL)arg1 legibilityStyle:(NSInteger)arg2 foregroundColor:(id)arg3 foregroundAlpha:(CGFloat)arg4 ;
-(id)initWithStyle:(NSInteger)arg0 legibilityStyle:(NSInteger)arg1 foregroundColor:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 legibilityStyle:(NSInteger)arg1 foregroundColor:(id)arg2 foregroundAlpha:(CGFloat)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 legibilityStyle:(NSInteger)arg1 foregroundColor:(id)arg2 foregroundAlpha:(CGFloat)arg3 overrideHeight:(id)arg4 ;
-(id)initWithStyle:(NSInteger)arg0 legibilityStyle:(NSInteger)arg1 foregroundColor:(id)arg2 overrideHeight:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif