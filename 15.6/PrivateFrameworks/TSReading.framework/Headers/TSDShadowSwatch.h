// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDSHADOWSWATCH_H
#define TSDSHADOWSWATCH_H

@class NSString;
@protocol TSDPathPainter;

#import <Foundation/Foundation.h>

#import "TSDShadow.h"

@interface TSDShadowSwatch : NSObject <TSDPathPainter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDShadow *shadow; // ivar: mShadow
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithShadow:(id)arg0 ;
-(void)dealloc;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 forImage:(struct CGImage *)arg2 swatchRect:(struct CGRect )arg3 wantsStroke:(BOOL)arg4 ;
-(void)p_drawContactShadowInContext:(struct CGContext *)arg0 inRect:(struct CGRect )arg1 forShadow:(id)arg2 forImage:(struct CGImage *)arg3 forSwatchRect:(struct CGRect )arg4 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif