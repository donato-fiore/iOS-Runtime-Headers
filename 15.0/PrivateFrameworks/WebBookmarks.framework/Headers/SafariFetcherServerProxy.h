// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAFARIFETCHERSERVERPROXY_H
#define SAFARIFETCHERSERVERPROXY_H

@class NSString;
@protocol WebBookmarksXPCConnectionDelegate, WebBookmarksClientDelegateProtocol;

#import <Foundation/Foundation.h>

#import "WebBookmarksXPCConnection.h"

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate>

 {
    WebBookmarksXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WebBookmarksClientDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)clearAllReadingListArchives;
-(void)clearReadingListArchiveWithUUID:(id)arg0 ;
-(void)connection:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)didFinishFetching;
-(void)didStartFetchingReadingListItemWithMessage:(id)arg0 ;
-(void)didStopFetchingReadingListItemWithMessage:(id)arg0 ;
-(void)didUpdateProgressWithMessage:(id)arg0 ;
-(void)startReadingListFetcher;


@end


#endif