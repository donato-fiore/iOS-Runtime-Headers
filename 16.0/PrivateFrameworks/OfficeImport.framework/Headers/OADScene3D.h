// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADSCENE3D_H
#define OADSCENE3D_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADCamera.h"
#import "OADLightRig.h"
#import "OADBackdrop.h"

@interface OADScene3D : NSObject <NSCopying>

 {
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}




+(id)nullScene3D;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)backdrop;
-(id)camera;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)lightRig;
-(void)setBackdrop:(id)arg0 ;
-(void)setCamera:(id)arg0 ;
-(void)setLightRig:(id)arg0 ;


@end


#endif