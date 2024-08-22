// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPRIORITIZEDSIZE_H
#define AVPRIORITIZEDSIZE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AVPrioritizedSize : NSObject

@property (nonatomic) CGSize currentTotalSize; // ivar: _currentTotalSize
@property (retain, nonatomic) NSMutableArray *highPrioritySizes; // ivar: _highPrioritySizes
@property (retain, nonatomic) NSMutableArray *lowPrioritySizes; // ivar: _lowPrioritySizes
@property (retain, nonatomic) NSMutableArray *mediumPrioritySizes; // ivar: _mediumPrioritySizes
@property (retain, nonatomic) NSMutableArray *requiredPrioritySizes; // ivar: _requiredPrioritySizes
@property (retain, nonatomic) NSMutableArray *veryHighPrioritySizes; // ivar: _veryHighPrioritySizes


+(id)sizesResolvingFirstPrioritizedSize:(id)arg0 secondPrioritizedSize:(id)arg1 inAvailableWidth:(CGFloat)arg2 ;
-(id)init;
-(id)removeLastSizeOfPriority:(NSUInteger)arg0 ;
-(void)addSize:(struct CGSize )arg0 withPriority:(NSUInteger)arg1 ;


@end


#endif