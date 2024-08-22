// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLOBJECT_H
#define MDLOBJECT_H

@class NSMapTable, NSArray, NSString;
@protocol MDLNamed, MDLObjectContainerComponent, MDLTransformComponent;

#import <Foundation/Foundation.h>

#import "MDLObject.h"

@interface MDLObject : NSObject <MDLNamed>

 {
    MDLObject *_parent;
    NSMapTable *_components;
}


@property (retain, nonatomic) NSObject<MDLObjectContainerComponent> *children; // ivar: _children
@property (readonly, copy, nonatomic) NSArray *components;
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) MDLObject *instance; // ivar: _instance
@property (copy, nonatomic) NSString *name; // ivar: name
@property (weak, nonatomic) MDLObject *parent;
@property (readonly, nonatomic) NSString *path;
@property (retain, nonatomic) NSObject<MDLTransformComponent> *transform;


-(id)componentConformingToProtocol:(id)arg0 ;
-(id)description;
-(id)init;
-(id)objectAtPath:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)recursiveDescription;
-(struct ? )boundingBoxAtTime:(CGFloat)arg0 ;
-(void)addChild:(id)arg0 ;
// -(void)enumerateChildObjectsOfClass:(Class)arg0 root:(id)arg1 usingBlock:(id)arg2 stopPointer:(unk)arg3  ;
-(void)setComponent:(id)arg0 forProtocol:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif