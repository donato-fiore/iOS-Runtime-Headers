// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKCIRCULARARRAY_H
#define ABPKCIRCULARARRAY_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface ABPKCircularArray : NSObject {
    NSMutableArray *_array;
    NSInteger _capacity;
}


@property (readonly) NSArray *contents;


-(NSInteger)count;
-(id)initWithCapacity:(NSInteger)arg0 ;
-(void)add:(id)arg0 ;


@end


#endif