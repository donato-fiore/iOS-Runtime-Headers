// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLUIHOSTSERVICEPROXY_H
#define BLUIHOSTSERVICEPROXY_H

@class BLUIHostServiceNonUI, BLRequest;
@protocol BLUIHostServiceProtocol, BLDownloadQueueUIManagerProtocol;

#import <Foundation/Foundation.h>

#import "BLDownloadQueue.h"

@interface BLUIHostServiceProxy : NSObject <BLUIHostServiceProtocol>



@property (readonly, weak) BLDownloadQueue *downloadQueue; // ivar: _downloadQueue
@property (readonly) BLUIHostServiceNonUI *fallback; // ivar: _fallback
@property (readonly, weak) BLRequest *request; // ivar: _request
@property (readonly, weak) NSObject<BLDownloadQueueUIManagerProtocol> *uiManagerDelegate; // ivar: _uiManagerDelegate


-(id)_topMostViewController;
-(id)initWithUIManager:(id)arg0 forRequest:(id)arg1 inDownloadQueue:(id)arg2 ;
-(void)handleAuthenticateRequest:(id)arg0 withReply:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 withReply:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg0 withReply:(id)arg1 ;


@end


#endif