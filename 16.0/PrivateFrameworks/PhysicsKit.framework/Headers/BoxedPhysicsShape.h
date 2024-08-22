// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BOXEDPHYSICSSHAPE_H
#define BOXEDPHYSICSSHAPE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BoxedPhysicsShape : NSObject {
    int shapeType;
    NSArray *points;
}




+(id)boxPhysicsShape:(struct PKPhysicsShape *)arg0 ;
-(struct PKPhysicsShape *)unboxShape;


@end


#endif