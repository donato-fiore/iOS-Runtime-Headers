// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDOWNLOADSESSION_H
#define SSDOWNLOADSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"
#import "SSDownload.h"
#import "SSDownloadAsset.h"

@interface SSDownloadSession : NSObject {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSInteger _sessionID;
    NSInteger _assetID;
    NSInteger _downloadID;
}


@property (readonly) SSDownload *download;
@property (readonly) SSDownloadAsset *downloadAsset;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_copySessionPropertyWithKey:(char *)arg0 ;
-(id)_initSSDownloadSession;
-(id)_initWithMessage:(id)arg0 controlConnection:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif