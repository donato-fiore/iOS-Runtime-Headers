// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REHTTPCONNECTION_H
#define REHTTPCONNECTION_H

@class NSMutableArray, NSMapTable, NSString;
@protocol NSStreamDelegate, OS_dispatch_queue, REHTTPConnectionDelegate;

#import <Foundation/Foundation.h>


@interface REHTTPConnection : NSObject <NSStreamDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingResponse;
    NSMapTable *_pendingRequests;
}


@property (readonly, nonatomic) *_CFHTTPServerConnection connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REHTTPConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)open;
-(id)initWithConnection:(struct _CFHTTPServerConnection *)arg0 ;
-(void)_handleCompleteRequest:(id)arg0 stream:(id)arg1 error:(id)arg2 ;
-(void)_sendResponse:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)didCompleteResponse:(struct _CFHTTPServerResponse *)arg0 error:(id)arg1 ;
-(void)didRecieveError:(id)arg0 ;
-(void)didRecieveRequest:(struct _CFHTTPServerRequest *)arg0 ;
-(void)invalidate;
-(void)invalidated;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif