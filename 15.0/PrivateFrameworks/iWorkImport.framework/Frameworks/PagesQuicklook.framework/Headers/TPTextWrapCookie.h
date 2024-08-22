// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPTEXTWRAPCOOKIE_H
#define TPTEXTWRAPCOOKIE_H

@class TSUPointerKeyDictionary, TSWPColumn, NSArray, TSDWrapSegments, TSDLayout<TSWPLayoutTarget>;

#import <Foundation/Foundation.h>


@interface TPTextWrapCookie : NSObject {
    TSUPointerKeyDictionary *_wrapSegmentsInverseTransformInRootDictionary;
}


@property (retain, nonatomic) TSWPColumn *column; // ivar: _column
@property (readonly, nonatomic) NSArray *floatingWrappables; // ivar: _floatingWrappables
@property (retain, nonatomic) TSDWrapSegments *interiorWrapSegments; // ivar: _interiorWrapSegments
@property (weak, nonatomic) TSDLayout<TSWPLayoutTarget> *target; // ivar: _target
@property (readonly, nonatomic) CGAffineTransform targetInverseTransformInRoot; // ivar: _targetInverseTransformInRoot


+(id)textWrapCookieForColumn:(id)arg0 targetLayout:(id)arg1 ;
-(id)initWithColumn:(id)arg0 targetLayout:(id)arg1 ;
-(id)transformedWrapSegmentsForWrappable:(id)arg0 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform )arg1 ;
-(void)addFloatingWrappable:(id)arg0 ;


@end


#endif