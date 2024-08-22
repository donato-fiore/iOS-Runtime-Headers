// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCOMPONENT_H
#define GKCOMPONENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKEntity.h"
#import "GKComponentSystem.h"

@interface GKComponent : NSObject <NSCopying, NSSecureCoding>

 {
    GKEntity *_entity;
    int _usesPerComponentUpdateCount;
    GKComponentSystem *_componentSystem;
    NSString *_componentName;
}


@property (nonatomic) NSString *componentName;
@property (nonatomic) GKComponentSystem *componentSystem;
@property (readonly, weak, nonatomic) GKEntity *entity;
@property (nonatomic) BOOL usesPerComponentUpdate;


+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)didAddToEntity;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;
-(void)willRemoveFromEntity;


@end


#endif