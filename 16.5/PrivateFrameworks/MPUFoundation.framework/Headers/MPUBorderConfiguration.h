// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUBORDERCONFIGURATION_H
#define MPUBORDERCONFIGURATION_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPUBorderConfiguration : NSObject <NSCopying>



@property (nonatomic) CGFloat borderAlpha; // ivar: _borderAlpha
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) CGFloat dropShadowAlpha; // ivar: _dropShadowAlpha
@property (retain, nonatomic) UIColor *dropShadowColor; // ivar: _dropShadowColor
@property (nonatomic) NSUInteger dropShadowEdges; // ivar: _dropShadowEdges
@property (nonatomic) CGFloat dropShadowWidth; // ivar: _dropShadowWidth
@property (nonatomic) CGFloat fillAlpha; // ivar: _fillAlpha
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (readonly, nonatomic, getter=isFullyTransparent) BOOL fullyTransparent;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif