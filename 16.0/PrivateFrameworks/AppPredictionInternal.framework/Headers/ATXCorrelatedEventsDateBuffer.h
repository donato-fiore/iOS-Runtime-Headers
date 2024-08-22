// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCORRELATEDEVENTSDATEBUFFER_H
#define ATXCORRELATEDEVENTSDATEBUFFER_H


#import <Foundation/Foundation.h>


@interface ATXCorrelatedEventsDateBuffer : NSObject

@property (readonly, nonatomic) CGFloat bufferSeconds; // ivar: _bufferSeconds
@property (readonly, nonatomic) NSInteger bufferType; // ivar: _bufferType


-(id)endDateWithBufferForEvent:(id)arg0 ;
-(id)initWithBufferSeconds:(CGFloat)arg0 andBufferType:(NSInteger)arg1 ;
-(id)startDateWithBufferForEvent:(id)arg0 ;


@end


#endif