// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLEGACYDOWNLOADNOTIFIER_H
#define MTLEGACYDOWNLOADNOTIFIER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MTLegacyDownloadNotifier : NSObject

@property (retain, nonatomic) NSMutableArray *downloadListeners; // ivar: _downloadListeners


-(id)_listenerWithDelegate:(id)arg0 ;
-(id)init;
-(void)_sendDelegateSelector:(SEL)arg0 withDownload:(id)arg1 ;
-(void)_sendDelegateSelector:(SEL)arg0 withDownloadCount:(id)arg1 ;
-(void)_sendDelegateSelector:(SEL)arg0 withDownloads:(id)arg1 ;
-(void)registerForUpdates:(id)arg0 ;
-(void)unregisterForUpdates:(id)arg0 ;


@end


#endif