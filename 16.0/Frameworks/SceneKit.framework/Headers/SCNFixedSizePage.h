// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNFIXEDSIZEPAGE_H
#define SCNFIXEDSIZEPAGE_H

@class NSMutableIndexSet;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface SCNFixedSizePage : NSObject {
    NSUInteger _elementSize;
    NSMutableIndexSet *_freeIndices;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer


-(BOOL)hasFreeElementsLeft;
-(BOOL)isFull;
-(NSUInteger)_allocateElement;
-(id)initWithBuffer:(id)arg0 elementSize:(NSUInteger)arg1 ;
-(id)newSubBuffer;
-(void)dealloc;
-(void)deallocateElementAtOffset:(NSUInteger)arg0 ;


@end


#endif