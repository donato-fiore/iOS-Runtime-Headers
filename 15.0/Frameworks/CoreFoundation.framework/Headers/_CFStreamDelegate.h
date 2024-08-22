// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CFSTREAMDELEGATE_H
#define _CFSTREAMDELEGATE_H

@class NSString;
@protocol NSStreamDelegate;

#import <Foundation/Foundation.h>


@interface _CFStreamDelegate : NSObject <NSStreamDelegate>

 {
    NSUInteger _flags;
    ? _client;
    ? _cb;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStreamEvents:(NSUInteger)arg0 callback:(*void)arg1 context:(struct ? *)arg2 ;
-(void)dealloc;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif