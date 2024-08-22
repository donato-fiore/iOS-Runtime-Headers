// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DEXTRUSIONDOUBLEBEVELGENERATOR_H
#define TSCH3DEXTRUSIONDOUBLEBEVELGENERATOR_H


#import <Foundation/Foundation.h>


@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject {
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _inputSpinePoints;
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _spinePoints;
    vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> _scaleValues;
}


@property (nonatomic) float bevelHeight; // ivar: _bevelHeight
@property (nonatomic) NSInteger bevelSlices; // ivar: _bevelSlices
@property (readonly, nonatomic) NSInteger bottomBevelStartIndex;
@property (readonly, nonatomic) NSInteger bottomNonBevelStartIndex;
@property (nonatomic) BOOL enableBevelEdges; // ivar: _enableBevelEdges


+(id)generator;
+(id)namedBevelInterpolationShaderFunction;
-(*void)inputSpinePoints;
-(*void)scaleValues;
-(*void)spinePoints;
-(NSInteger)bottomSlices;
-(NSInteger)topBevelStartIndex;
-(NSInteger)topSlices;
-(float)scaleUValueAtIndex:(NSInteger)arg0 ;
-(float)spineUValueAtIndex:(NSInteger)arg0 ;
-(id)init;
-(struct tvec3<float> )bottomDirection;
-(void)adjustBottomOffset;
-(void)adjustBottomScales;
-(void)adjustTopScales;
-(void)createSpinePointArray;
-(void)generate;
-(void)generateBottom;
-(void)generateTop;
-(void)resetAllScales;


@end


#endif