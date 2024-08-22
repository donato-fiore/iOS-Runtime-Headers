// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKSPATIALCOLLIDER_H
#define MKSPATIALCOLLIDER_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "_MKSpatialColliderPairSet.h"

@interface MKSpatialCollider : NSObject <NSFastEnumeration>

 {
    NSInteger _options;
    _MKSpatialColliderPairSet *_previousCollisionPairs;
    _MKSpatialColliderPairSet *_registeredCollisonPairs;
    BOOL _isVertical;
    vector<MKAnnotationView *, std::allocator<MKAnnotationView *>> _sortedAnnotationViews;
    CGFloat _maxLength;
    NSUInteger mutator;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)insertAnnotationView:(id)arg0 ;
-(NSUInteger)viewCount;
-(id)annotationViewAtIndex:(NSUInteger)arg0 ;
-(id)initWithAnnotationViews:(id)arg0 previousCollissions:(id)arg1 options:(NSInteger)arg2 ;
-(id)registeredCollissions;
-(id)viewsCollidingWithAnnotationView:(id)arg0 inCollidableList:(BOOL)arg1 ;
-(id)viewsCollidingWithAnnotationView:(id)arg0 inCollidableList:(BOOL)arg1 fromIndex:(NSInteger)arg2 length:(CGFloat)arg3 ;
-(id)viewsCollidingWithAnnotationViewAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif