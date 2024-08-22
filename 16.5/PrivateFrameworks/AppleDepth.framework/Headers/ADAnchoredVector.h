// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADANCHOREDVECTOR_H
#define ADANCHOREDVECTOR_H


#import <Foundation/Foundation.h>


@interface ADAnchoredVector : NSObject {
    ? _origin;
    ? _direction;
}


@property ? direction;
@property ? origin;


+(id)vectorWithOrigindirection;
+(id)vectorWithTransform:(struct ? )arg0 ;
-(id)intersectWithPlanenormal;
-(id)vectorByChangingPOV:(struct ? )arg0 ;


@end


#endif