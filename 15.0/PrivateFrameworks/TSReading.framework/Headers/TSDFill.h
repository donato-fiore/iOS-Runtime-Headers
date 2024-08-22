// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFILL_H
#define TSDFILL_H

@class NSString;
@protocol TSDPathPainter, TSSThemeAsset;

#import <Foundation/Foundation.h>


@interface TSDFill : NSObject <TSDPathPainter, TSSThemeAsset>

 {
    int mInterest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canApplyToCALayer;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(BOOL)canApplyToCAShapeLayer;
-(BOOL)drawsInOneStep;
-(BOOL)isClear;
-(BOOL)isNearlyWhite;
-(BOOL)isOpaque;
-(BOOL)isThemeEquivalent:(id)arg0 ;
-(BOOL)shouldBeReappliedToCALayer:(id)arg0 ;
-(id)referenceColor;
-(int)fillType;
-(void)addInterest;
-(void)applyToCALayer:(id)arg0 withScale:(CGFloat)arg1 ;
-(void)applyToCAShapeLayer:(id)arg0 withScale:(CGFloat)arg1 ;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)i_flushCaches;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)removeInterest;


@end


#endif