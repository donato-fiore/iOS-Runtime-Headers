// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDIDENTIFIERTABLE_H
#define HDIDENTIFIERTABLE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface HDIdentifierTable : NSObject {
    NSMapTable *_map;
    NSUInteger _nextIdentifier;
}




-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)count;
-(id)allObjects;
-(id)objectWithIdentifier:(NSUInteger)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectWithIdentifier:(NSUInteger)arg0 ;


@end


#endif