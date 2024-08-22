// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEOBJECT_H
#define PHASEOBJECT_H

@class NSMutableSet, NSArray, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"
#import "PHASEObject.h"

@interface PHASEObject : NSObject <NSCopying>

 {
    NSMutableSet *_children;
}


@property (readonly, copy, nonatomic) NSArray *children;
@property (weak, nonatomic) PHASEEngine *engine; // ivar: _engine
@property (nonatomic) Handle64 geoEntityHandle; // ivar: _geoEntityHandle
@property (retain, nonatomic) NSMutableArray *geoShapeHandles; // ivar: _geoShapeHandles
@property (weak, nonatomic) PHASEObject *parent; // ivar: _parent
@property (nonatomic) ? transform; // ivar: _transform
@property (nonatomic) ? worldTransform;


+(id)forward;
+(id)new;
+(id)right;
+(id)up;
-(BOOL)addChild:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEngine:(id)arg0 ;
-(id)initWithEngine:(id)arg0 entityType:(unsigned int)arg1 shapes:(id)arg2 ;
-(struct ? )_convertTransform:(struct ? )arg0 fromObject:(id)arg1 ;
-(void)dealloc;
-(void)removeChild:(id)arg0 ;
-(void)removeChildren;


@end


#endif