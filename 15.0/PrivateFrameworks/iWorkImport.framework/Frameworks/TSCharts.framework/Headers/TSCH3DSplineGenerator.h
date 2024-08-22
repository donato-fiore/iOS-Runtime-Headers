// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSPLINEGENERATOR_H
#define TSCH3DSPLINEGENERATOR_H


#import <Foundation/Foundation.h>


@interface TSCH3DSplineGenerator : NSObject {
    vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> _controlPts;
    vector<long, std::allocator<long>> _splineExclude;
}


@property (nonatomic) float adaptiveThreshold; // ivar: _adaptiveThreshold
@property (nonatomic) float detail; // ivar: _detail
@property (nonatomic) float tension; // ivar: _tension


+(id)generator;
-(*void)controlPts;
-(*void)splineExclude;
-(BOOL)isClosed;
-(id)init;
-(void)calcControlMatrix:(*void)arg0 pointNum:(NSInteger)arg1 ;
-(void)generatePoints:(*void)arg0 ;


@end


#endif