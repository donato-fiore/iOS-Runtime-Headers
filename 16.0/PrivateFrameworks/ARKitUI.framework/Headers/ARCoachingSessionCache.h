// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCOACHINGSESSIONCACHE_H
#define ARCOACHINGSESSIONCACHE_H


#import <Foundation/Foundation.h>


@interface ARCoachingSessionCache : NSObject {
    NSInteger _planeCount;
    NSInteger _horizontalPlaneCount;
    NSInteger _verticalPlaneCount;
    BOOL _planeCacheInitialized;
}




-(BOOL)hasAnyPlane:(id)arg0 ;
-(BOOL)hasHorizontalPlane:(id)arg0 ;
-(BOOL)hasVerticalPlane:(id)arg0 ;
-(id)init;
-(void)anchorsAdded:(id)arg0 ;
-(void)anchorsRemoved:(id)arg0 ;
-(void)clear;
-(void)initializePlaneCache:(id)arg0 ;
-(void)removeFromPlaneCache:(id)arg0 ;
-(void)sessionChanged;
-(void)updatePlaneCache:(id)arg0 ;


@end


#endif