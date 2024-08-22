// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GLKEFFECTPROPERTYTEXGEN_H
#define GLKEFFECTPROPERTYTEXGEN_H



#import "GLKEffectProperty.h"

@interface GLKEffectPropertyTexGen : GLKEffectProperty

@property (readonly, nonatomic) int coord; // ivar: _coord
@property (nonatomic) *float eyePlaneByInvModelview; // ivar: _eyePlaneByInvModelview
@property (nonatomic) int eyePlaneByInvModelviewLoc; // ivar: _eyePlaneByInvModelviewLoc
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) int modeLoc; // ivar: _modeLoc
@property (nonatomic) char * modeNameString; // ivar: _modeNameString
@property (nonatomic) *float plane; // ivar: _plane
@property (nonatomic) int planeLoc; // ivar: _planeLoc
@property (nonatomic) char * planeNameString; // ivar: _planeNameString
@property (nonatomic) unsigned int textureIndex; // ivar: _textureIndex


-(id)init;
-(id)initWithMode:(int)arg0 coord:(int)arg1 ;
-(void)bind;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)initializeMasks;
-(void)setShaderBindings;


@end


#endif