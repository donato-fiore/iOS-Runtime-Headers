// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZJS3DELEMENT_H
#define OZJS3DELEMENT_H

@protocol OZ3DElementJSExport;


#import "OZJSElement.h"

@interface OZJS3DElement : OZJSElement <OZ3DElementJSExport>



@property (nonatomic) *void tdElement; // ivar: _tdElement


+(id)elementWith3DElement:(*void)arg0 ;
-(id)initWith3DElement:(*void)arg0 ;
-(struct SCNVector4 )floorPosition:(id)arg0 atTime:(float)arg1 ;
-(struct SCNVector4 )floorPosition:(id)arg0 beneath:(struct SCNVector3 )arg1 ;
-(void)applyColorR:(float)arg0 g:(float)arg1 b:(float)arg2 ;
-(void)applyContourToMotionPath:(struct SCNVector3 )arg0 vertically:(BOOL)arg1 direction:(float)arg2 rotation:(float)arg3 addStart:(BOOL)arg4 addEnd:(BOOL)arg5 ;
-(void)placeOnFloorRelativeTo:(int)arg0 inScene:(id)arg1 faceCamera:(BOOL)arg2 ;
-(void)placeRelativeTo:(int)arg0 inScene:(id)arg1 alignment:(int)arg2 distance:(float)arg3 faceCamera:(BOOL)arg4 preserveY:(BOOL)arg5 time:(float)arg6 ;
-(void)setColor:(struct SCNVector4 )arg0 forShaderParameterWithName:(id)arg1 ;
-(void)setPosition:(struct SCNVector3 )arg0 forShaderParameterWithName:(id)arg1 ;


@end


#endif