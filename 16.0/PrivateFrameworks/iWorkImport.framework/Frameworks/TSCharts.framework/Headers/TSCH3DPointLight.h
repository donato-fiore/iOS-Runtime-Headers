// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DPOINTLIGHT_H
#define TSCH3DPOINTLIGHT_H

@protocol TSCH3DLightPositionable;


#import "TSCH3DLight.h"
#import "TSCH3DVector.h"

@interface TSCH3DPointLight : TSCH3DLight <TSCH3DLightPositionable>

 {
    TSCH3DVector *_position;
}


@property (nonatomic) tvec3<float> position;


+(Class)effectClass;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif