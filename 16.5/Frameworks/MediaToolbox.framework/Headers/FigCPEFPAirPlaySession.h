// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCPEFPAIRPLAYSESSION_H
#define FIGCPEFPAIRPLAYSESSION_H

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigCPEFPAirPlaySession : NSObject {
    BOOL _invalid;
    unsigned int _fairPlayContext;
    NSDictionary *_protectionInfo;
    NSDictionary *_contentInfo;
    *__CFAllocator _fairPlayDeallocator;
    *OpaqueFigEndpointPlaybackSession _playbackSession;
    NSString *_mediaControlUUID;
    unsigned int _vodkaVersion;
    *FPStreamOpaque_ _fairPlaySession;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}




-(id)createPicRequestWithError:(*id)arg0 ;
-(id)initWithFairPlayContext:(unsigned int)arg0 contentInfo:(id)arg1 routeInfo:(id)arg2 playbackSession:(struct OpaqueFigEndpointPlaybackSession *)arg3 mediaControlUUID:(id)arg4 ;
-(id)initWithFairPlayContext:(unsigned int)arg0 protectionInfo:(id)arg1 routeInfo:(id)arg2 playbackSession:(struct OpaqueFigEndpointPlaybackSession *)arg3 mediaControlUUID:(id)arg4 ;
-(id)initWithFairPlayContext:(unsigned int)arg0 routeInfo:(id)arg1 playbackSession:(struct OpaqueFigEndpointPlaybackSession *)arg2 mediaControlUUID:(id)arg3 ;
-(id)legacySinfs;
-(id)mediaControlParamsWithStoreResponse:(id)arg0 ;
-(id)sicWithPic:(id)arg0 ;
-(void)authorizeItemCompletionHandler_objc:(struct ? *)arg0 picData:(struct __CFData *)arg1 playerGUID:(struct __CFString *)arg2 error:(int)arg3 ;
-(void)beginSessionWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)endSession;


@end


#endif