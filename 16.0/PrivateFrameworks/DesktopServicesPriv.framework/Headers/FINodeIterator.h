// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FINODEITERATOR_H
#define FINODEITERATOR_H


#import <Foundation/Foundation.h>


@interface FINodeIterator : NSObject {
    *OpaqueNodeIterator _iterator;
}


@property (readonly, nonatomic) NSUInteger estimatedSize;
@property (readonly, nonatomic) BOOL fullyPopulated;


+(id)iteratorForFINode:(id)arg0 includingInvisibleItems:(BOOL)arg1 ;
-(id)first;
-(id)initWithIterator:(struct OpaqueNodeIterator *)arg0 ;
-(id)next;
-(void)dealloc;


@end


#endif