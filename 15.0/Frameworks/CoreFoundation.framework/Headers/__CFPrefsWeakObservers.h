// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CFPREFSWEAKOBSERVERS_H
#define __CFPREFSWEAKOBSERVERS_H

@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying>

 {
    __cfobservers_t values;
    NSUInteger count;
}




-(NSUInteger)approximateCount;
-(NSUInteger)borrowObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(unsigned char)addObject:(id)arg0 ;
-(unsigned char)removeObject:(id)arg0 ;
-(void)dealloc;


@end


#endif