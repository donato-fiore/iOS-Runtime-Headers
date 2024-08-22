// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCMOMENTS_H
#define AVCMOMENTS_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, AVCMomentsDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCMoments : NSObject {
    AVConferenceXPCClient *_connection;
    NSMutableDictionary *_requests;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}


@property (readonly, nonatomic) int activeRequestCount; // ivar: _currentActiveRequestsCount
@property (readonly, nonatomic) unsigned int capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSObject<AVCMomentsDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) int pendingRequestCount; // ivar: _currentPendingRequestsCount
@property (readonly, nonatomic) NSString *requesterID; // ivar: _requesterID
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken


-(BOOL)avcMomentsRequestDidEndRequest:(id)arg0 withError:(*id)arg1 ;
-(BOOL)avcMomentsRequestDidRejectRequest:(id)arg0 withError:(*id)arg1 ;
-(BOOL)avcMomentsRequestDidStartRequest:(id)arg0 withError:(*id)arg1 ;
-(BOOL)connect;
-(id)description;
-(id)initWithStreamToken:(NSInteger)arg0 requesterID:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3 ;
-(id)newDictionaryForRequest:(id)arg0 ;
-(id)newRequestWithMediaType:(unsigned char)arg0 mode:(unsigned char)arg1 requesteeID:(id)arg2 ;
-(id)newRequestWithMediaType:(unsigned char)arg0 requesteeID:(id)arg1 ;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)didEndProcessingRequestHelperWithResult:(id)arg0 ;
-(void)didFinishRequestHelperWithResult:(id)arg0 ;
-(void)didStartProcessingRequestHelperWithResult:(id)arg0 ;
-(void)disconnect;
-(void)registerBlocksForNotifications;


@end


#endif