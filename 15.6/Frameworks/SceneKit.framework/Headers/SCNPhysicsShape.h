// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNPHYSICSSHAPE_H
#define SCNPHYSICSSHAPE_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_options;
    NSArray *_transforms;
    *void _cachedObject;
    *btCollisionShape _collisionShape;
}


@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) id *sourceObject; // ivar: _referenceObject
@property (readonly, nonatomic) NSArray *transforms;


+(BOOL)supportsSecureCoding;
+(id)defaultShapeForGeometry:(id)arg0 ;
+(id)shapeWithGeometry:(id)arg0 options:(id)arg1 ;
+(id)shapeWithNode:(id)arg0 options:(id)arg1 ;
+(id)shapeWithShapes:(id)arg0 transforms:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCachedObject:(*void)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(id)arg0 options:(id)arg1 ;
-(id)referenceObject;
-(struct btCollisionShape *)_handle;
-(void)_customDecodingOfSCNPhysicsShape:(id)arg0 ;
-(void)_customEncodingOfSCNPhysicsShape:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setReferenceObject:(id)arg0 ;


@end


#endif