// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSTACK_H
#define CNSTACK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CNStack : NSObject {
    NSMutableArray *_objects;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) id *peek;


-(id)init;
-(id)pop;
-(id)popAll;
-(void)popAllWithHandler:(id)arg0 ;
-(void)popWithHandler:(id)arg0 ;
-(void)push:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif