// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXSCENE3D_H
#define OAXSCENE3D_H


#import <Foundation/Foundation.h>


@interface OAXScene3D : NSObject



+(?)readBackdropFromXmlNodedrawingState;
+(?)readCameraFromXmlNodedrawingState;
+(?)readLightRigFromXmlNodedrawingState;
+(?)readScene3DFromXmlNode:(?)arg0 packagePartdrawingState;
+(BOOL)isEmpty:(id)arg0 ;
+(id)cameraTypeEnumMap;
+(id)lightRigDirectionEnumMap;
+(id)lightRigTypeEnumMap;
+(void)writeBackdrop:(id)arg0 to:(id)arg1 ;
+(void)writeCamera:(id)arg0 to:(id)arg1 ;
+(void)writeLightRig:(id)arg0 to:(id)arg1 ;
+(void)writeRotation3D:(id)arg0 to:(id)arg1 ;
+(void)writeScene3D:(id)arg0 to:(id)arg1 ;


@end


#endif