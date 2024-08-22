// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADVECTOR3D_H
#define OADVECTOR3D_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADVector3D : NSObject <NSCopying>

 {
    float mDx;
    float mDy;
    float mDz;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)dx;
-(float)dy;
-(float)dz;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDx:(float)arg0 dy:(float)arg1 dz:(float)arg2 ;


@end


#endif