// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTXTRANSPORT_H
#define DTXTRANSPORT_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DTXResourceTracker.h"

@interface DTXTransport : NSObject {
    NSObject<OS_dispatch_queue> *_serializer;
    NSObject<OS_dispatch_queue> *_handlerGuard;
    id *_dataReceivedHandler;
    BOOL _resumed;
}


@property (copy, nonatomic) id *dataReceivedHandler;
@property (readonly) NSArray *localAddresses;
@property (readonly, nonatomic) DTXResourceTracker *resourceTracker; // ivar: _tracker
@property unsigned int status; // ivar: _status


+(BOOL)recognizesURL:(id)arg0 ;
+(id)schemes;
-(NSUInteger)transmit:(*void)arg0 ofLength:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithRemoteAddress:(id)arg0 ;
-(id)initWithXPCRepresentation:(id)arg0 ;
-(id)permittedBlockCompressionTypes;
-(id)serializedXPCRepresentation;
-(unsigned int)supportedDirections;
-(void)dealloc;
-(void)disconnect;
-(void)received:(char *)arg0 ofLength:(NSUInteger)arg1 destructor:(id)arg2 ;
-(void)serializedDisconnect:(id)arg0 ;


@end


#endif