// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSTREAMOUTPUT_H
#define VCSTREAMOUTPUT_H

@class NSString;
@protocol VCStreamSychronizationDelegate;


#import "VCObject.h"

@interface VCStreamOutput : VCObject <VCStreamSychronizationDelegate>

 {
    *opaqueVCRemoteImageQueue _remoteQueue;
    int _clientProcessID;
    *__CFDictionary _attributes;
    id *_synchronizationDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (nonatomic) float synchronizationTimeOffset;


-(BOOL)createRemoteQueue;
-(BOOL)enqueueAttributes:(struct __CFDictionary *)arg0 ;
-(BOOL)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithStreamToken:(NSInteger)arg0 clientProcessID:(int)arg1 synchronizationDelegate:(id)arg2 ;
-(id)synchronizationDelegate;
-(id)xpcSenderQueue;
-(void)dealloc;
-(void)setSynchronizationDelegate:(id)arg0 ;


@end


#endif