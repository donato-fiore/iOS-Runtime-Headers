// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADPOINT3D_H
#define OADPOINT3D_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADPoint3D : NSObject <NSCopying>

 {
    float mX;
    float mY;
    float mZ;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)x;
-(float)y;
-(float)z;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithX:(float)arg0 y:(float)arg1 z:(float)arg2 ;


@end


#endif