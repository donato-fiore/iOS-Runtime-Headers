// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10REALITYKIT28__ENTITYACCESSIBILITYWRAPPER_H
#define _TTC10REALITYKIT28__ENTITYACCESSIBILITYWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC10RealityKit28__EntityAccessibilityWrapper.h"

@interface _TtC10RealityKit28__EntityAccessibilityWrapper : NSObject {
    ? entity;
}


@property (nonatomic, readonly) NSString *entityDescription;
@property (nonatomic, readonly) NSString *entityLabel;
@property (nonatomic, readonly) NSUInteger identifier;
@property (nonatomic, readonly) BOOL isEntityAccessible;
@property (nonatomic, readonly) BOOL isEntityActive;
@property (nonatomic, readonly) BOOL isEntityRoot;
@property (nonatomic, readonly) _TtC10RealityKit28__EntityAccessibilityWrapper *rootEntityWrapper; // ivar: rootEntityWrapper


-(id)init;
-(struct CGRect )calculateScreenBoundingRectIn:(id)arg0 ;


@end


#endif