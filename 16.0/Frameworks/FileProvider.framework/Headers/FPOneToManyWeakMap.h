// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPONETOMANYWEAKMAP_H
#define FPONETOMANYWEAKMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary *_backingDictionary;
}




-(id)anyObjectForKey:(id)arg0 ;
-(id)init;
-(id)removeObject:(id)arg0 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg0 ;


@end


#endif