// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTTANGIERTEXTWRAPCONTEXT_H
#define SXTEXTTANGIERTEXTWRAPCONTEXT_H

@class TSWPColumn, TSDWrapPolygon, TSDLayout<TSWPLayoutTarget>, TSUPointerKeyDictionary;

#import <Foundation/Foundation.h>


@interface SXTextTangierTextWrapContext : NSObject

@property (readonly, nonatomic) TSWPColumn *column; // ivar: _column
@property (readonly, nonatomic) TSDWrapPolygon *interiorWrapPolygon; // ivar: _interiorWrapPolygon
@property (readonly, weak, nonatomic) TSDLayout<TSWPLayoutTarget> *target; // ivar: _target
@property (readonly, nonatomic) CGAffineTransform targetInverseTransformInRoot; // ivar: _targetInverseTransformInRoot
@property (retain, nonatomic) TSUPointerKeyDictionary *wrapPathInverseTransformInRootDictionary; // ivar: _wrapPathInverseTransformInRootDictionary


-(id)initWithColumn:(id)arg0 targetLayout:(id)arg1 ;
-(id)transformedWrapPolygonForWrappable:(id)arg0 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform )arg1 ;


@end


#endif