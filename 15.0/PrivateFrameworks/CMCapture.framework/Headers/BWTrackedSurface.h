// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWTRACKEDSURFACE_H
#define BWTRACKEDSURFACE_H


#import <Foundation/Foundation.h>


@interface BWTrackedSurface : NSObject

@property (nonatomic) int clientUseCount; // ivar: _clientUseCount
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) BOOL owningPixelBufferDeallocated; // ivar: _owningPixelBufferDeallocated
@property (readonly, nonatomic) *__IOSurface surface; // ivar: _surface


-(id)initWithSurface:(struct __IOSurface *)arg0 handler:(id)arg1 ;
-(void)dealloc;


@end


#endif