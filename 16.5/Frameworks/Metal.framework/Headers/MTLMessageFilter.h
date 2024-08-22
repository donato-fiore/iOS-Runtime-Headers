// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLMESSAGEFILTER_H
#define MTLMESSAGEFILTER_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface MTLMessageFilter : NSObject

@property (readonly, retain) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger messageType; // ivar: _messageType


+(id)filter:(NSUInteger)arg0 device:(id)arg1 ;
-(id)init:(NSUInteger)arg0 device:(id)arg1 ;


@end


#endif