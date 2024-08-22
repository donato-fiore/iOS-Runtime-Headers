// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRDEFAULTBUFFERALLOCATOR_H
#define TXRDEFAULTBUFFERALLOCATOR_H

@class NSString;
@protocol TXRBufferAllocator;

#import <Foundation/Foundation.h>


@interface TXRDefaultBufferAllocator : NSObject <TXRBufferAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newBufferWithLength:(NSUInteger)arg0 ;
-(id)newBufferWithLength:(NSUInteger)arg0 ;


@end


#endif