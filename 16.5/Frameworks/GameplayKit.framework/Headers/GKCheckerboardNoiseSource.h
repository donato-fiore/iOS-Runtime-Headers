// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCHECKERBOARDNOISESOURCE_H
#define GKCHECKERBOARDNOISESOURCE_H



#import "GKNoiseSource.h"

@interface GKCheckerboardNoiseSource : GKNoiseSource

@property (nonatomic) CGFloat squareSize; // ivar: _squareSize


+(id)checkerboardNoiseWithSquareSize:(CGFloat)arg0 ;
-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithSquareSize:(CGFloat)arg0 ;


@end


#endif