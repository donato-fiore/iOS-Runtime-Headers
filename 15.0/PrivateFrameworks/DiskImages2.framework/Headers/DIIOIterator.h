// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIIOITERATOR_H
#define DIIOITERATOR_H



#import "DIIOObject.h"

@interface DIIOIterator : DIIOObject

@property (nonatomic) NSUInteger attempt; // ivar: _attempt
@property (readonly, nonatomic) BOOL retryIfInvalidated; // ivar: _retryIfInvalidated


-(id)initWithIOIterator:(unsigned int)arg0 retryIfInvalidated:(BOOL)arg1 retain:(BOOL)arg2 ;
-(unsigned int)copyNextObject;


@end


#endif