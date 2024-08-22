// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIVECTORGLYPHMUTATOR_H
#define CUIVECTORGLYPHMUTATOR_H


#import <Foundation/Foundation.h>


@interface CUIVectorGlyphMutator : NSObject

@property (nonatomic) ? blackDeltas; // ivar: _blackDeltas
@property (nonatomic) *CGPath originPath; // ivar: _originPath
@property (nonatomic) ? originPoints; // ivar: _originPoints
@property (nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (nonatomic) ? ultralightDeltas; // ivar: _ultralightDeltas


+(*CGFloat)realloc_cgfloat_array:(*CGFloat)arg0 withNewCount:(NSUInteger)arg1 ;
+(struct ? )deltaArrayFrom:(struct ? )arg0 to:(struct ? )arg1 ;
+(struct ? )pointArrayFromPath:(struct CGPath *)arg0 ;
+(struct ? )scalarsForGlyphWeight:(NSInteger)arg0 glyphSize:(NSInteger)arg1 ;
+(struct ? )transformForGlyphSize:(NSInteger)arg0 ;
-(id)initWithPointSize:(CGFloat)arg0 regular:(struct CGPath *)arg1 ultralight:(struct CGPath *)arg2 black:(struct CGPath *)arg3 ;
-(struct ? )applyDeltasWithScalars:(struct ? )arg0 ;
-(struct ? )applyDeltasWithScalars:(struct ? )arg0 andTransform:(struct ? )arg1 ;
-(struct CGPath *)cgPathFrom:(struct ? )arg0 ;
-(struct CGPath *)pathForScalars:(struct ? )arg0 ;
-(struct CGPath *)pathForScalars:(struct ? )arg0 andTransform:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif