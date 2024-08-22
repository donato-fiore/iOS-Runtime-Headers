// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOUNTEDMAP_H
#define SBCOUNTEDMAP_H

@class NSCountedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBCountedMap : NSObject {
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}




-(BOOL)checkinValue:(id)arg0 ;
-(BOOL)containsKey:(id)arg0 ;
-(BOOL)containsValue:(id)arg0 ;
-(id)checkoutValueForKey:(id)arg0 creationBlock:(id)arg1 ;
-(id)description;
-(id)init;
-(void)checkinValues:(id)arg0 ;


@end


#endif