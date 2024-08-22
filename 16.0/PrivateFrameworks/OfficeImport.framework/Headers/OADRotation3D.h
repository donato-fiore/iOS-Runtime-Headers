// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADROTATION3D_H
#define OADROTATION3D_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADRotation3D : NSObject <NSCopying>

 {
    float mLatitude;
    float mLongitude;
    float mRevolution;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)latitude;
-(float)longitude;
-(float)revolution;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLatitude:(float)arg0 longitude:(float)arg1 revolution:(float)arg2 ;


@end


#endif