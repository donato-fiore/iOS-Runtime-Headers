// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICSFIELD_H
#define PKPHYSICSFIELD_H

@protocol NSObject;

#import <Foundation/Foundation.h>

#import "PKRegion.h"

@interface PKPhysicsField : NSObject {
    ? _field;
    PKRegion *_region;
    ? _position;
    float _rotation;
    ? _scale;
}


@property (nonatomic) unsigned int categoryBitMask;
@property ? direction;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (nonatomic, getter=isOverride) BOOL override; // ivar: _override
@property ? position;
@property (retain, nonatomic) id *region;
@property (weak, nonatomic) NSObject<NSObject> *representedObject;
@property (nonatomic) float rotation;
@property ? scale;
@property (nonatomic) float strength;




@end


#endif