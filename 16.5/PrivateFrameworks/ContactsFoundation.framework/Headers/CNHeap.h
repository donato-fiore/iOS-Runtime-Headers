// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNHEAP_H
#define CNHEAP_H

@class NSMutableArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CNHeap : NSObject

@property (retain) NSMutableArray *heapObjects; // ivar: _heapObjects
@property (retain, nonatomic) NSMutableDictionary *heapObjectsByClassAndBinary; // ivar: _heapObjectsByClassAndBinary
@property (retain) NSString *rawDataString; // ivar: _rawDataString




@end


#endif