// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSAUTORELEASEPOOL_H
#define NSAUTORELEASEPOOL_H


#import <Foundation/Foundation.h>


@interface NSAutoreleasePool : NSObject {
    *void _token;
    *void _reserved3;
    *void _reserved2;
    *void _reserved;
}




+(BOOL)autoreleasePoolExists;
+(NSUInteger)autoreleasedObjectCount;
+(NSUInteger)poolCountHighWaterMark;
+(NSUInteger)poolCountHighWaterResolution;
+(NSUInteger)topAutoreleasePoolCount;
+(NSUInteger)totalAutoreleasedObjects;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)addObject:(id)arg0 ;
+(void)enableFreedObjectCheck:(BOOL)arg0 ;
+(void)enableRelease:(BOOL)arg0 ;
+(void)releaseAllPools;
+(void)resetTotalAutoreleasedObjects;
+(void)setPoolCountHighWaterMark:(NSUInteger)arg0 ;
+(void)setPoolCountHighWaterResolution:(NSUInteger)arg0 ;
+(void)showPools;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)retain;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)drain;
-(void)release;


@end


#endif