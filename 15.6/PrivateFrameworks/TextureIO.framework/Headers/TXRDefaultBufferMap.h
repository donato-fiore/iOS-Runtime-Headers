// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TXRDEFAULTBUFFERMAP_H
#define TXRDEFAULTBUFFERMAP_H

@class NSString;
@protocol TXRBufferMap;

#import <Foundation/Foundation.h>

#import "TXRDefaultBuffer.h"

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap>

 {
    *void _bytes;
    TXRDefaultBuffer *_buffer;
}


@property (readonly, nonatomic) *void bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initForBuffer:(id)arg0 withBytes:(*void)arg1 ;


@end


#endif