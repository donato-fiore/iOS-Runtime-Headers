// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPEQUATIONLAYOUT_H
#define TSWPEQUATIONLAYOUT_H

@class TSDMediaLayout, TSDLayoutGeometry, NSString, TSDShadow;
@protocol TSKChangeSourceObserver, EQKitLayout, EQKitLayoutContext;


#import "TSWPEquationInfo.h"

@interface TSWPEquationLayout : TSDMediaLayout <TSKChangeSourceObserver>



@property (retain, nonatomic) TSDLayoutGeometry *baseEquationLayoutGeometry; // ivar: _baseEquationLayoutGeometry
@property (retain, nonatomic) TSDLayoutGeometry *baseInfoGeometry; // ivar: _baseInfoGeometry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSDLayoutGeometry *equationGeometry; // ivar: _equationGeometry
@property (readonly, nonatomic) TSDLayoutGeometry *equationGeometryInRoot;
@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;
@property (nonatomic) BOOL equationIsValid; // ivar: _equationIsValid
@property (retain, nonatomic) NSObject<EQKitLayout> *equationLayout; // ivar: _equationLayout
@property (retain, nonatomic) NSObject<EQKitLayoutContext> *equationLayoutContext; // ivar: _equationLayoutContext
@property (readonly) NSUInteger hash;
@property (nonatomic) CGAffineTransform layoutToEquationTransform; // ivar: _layoutToEquationTransform
@property (nonatomic) CGAffineTransform layoutToStrokeTransform; // ivar: _layoutToStrokeTransform
@property (readonly) Class superclass;
@property (readonly, nonatomic) *CGColor textColor;
@property (readonly, nonatomic) TSDShadow *textShadow;


-(BOOL)supportsFlipping;
-(BOOL)supportsRotation;
-(struct CGRect )adornmentBoundsWithEquationSize:(struct CGSize )arg0 ;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(void)invalidateSize;
-(void)offsetGeometryBy:(struct CGPoint )arg0 ;
-(void)preprocessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)setParent:(id)arg0 ;


@end


#endif