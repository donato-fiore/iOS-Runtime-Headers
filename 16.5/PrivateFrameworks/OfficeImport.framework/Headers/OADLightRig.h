// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADLIGHTRIG_H
#define OADLIGHTRIG_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADRotation3D.h"

@interface OADLightRig : NSObject <NSCopying>

 {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)rotation;
-(int)direction;
-(int)type;
-(void)setDirection:(int)arg0 ;
-(void)setRotation:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif