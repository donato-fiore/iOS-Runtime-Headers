// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARTIMEKEYEDLIST_H
#define ARTIMEKEYEDLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ARTimeKeyedList : NSObject {
    NSUInteger _maxSize;
    NSMutableArray *_times;
    NSMutableArray *_objects;
}




-(NSUInteger)insertionIndexForTime:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(id)nearestObjectForTime:(CGFloat)arg0 ;
-(void)appendObject:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)clear;


@end


#endif