// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMRECTANGLERESULTSQUEUE_H
#define ICDOCCAMRECTANGLERESULTSQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICDocCamRectangleResultsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array; // ivar: _array


-(NSInteger)size;
-(id)dequeue;
-(id)init;
-(id)peek;
-(id)peek:(NSInteger)arg0 ;
-(id)peekTail;
// -(void)apply:(id)arg0 atIndex:(unk)arg1  ;
// -(void)apply:(id)arg0 fromIndex:(unk)arg1 toIndex:(NSInteger)arg2  ;
-(void)clear;
-(void)enqueue:(id)arg0 ;


@end


#endif