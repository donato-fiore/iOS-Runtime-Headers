// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDCONTENTTASTEREQUESTLISTENER_H
#define ICCLOUDCONTENTTASTEREQUESTLISTENER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICCloudContentTasteRequestListener : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_xpcConnection;
}




+(id)sharedCloudContentTasteRequestListener;
-(id)_init;
-(id)init;
-(void)_setupContentTasteServiceConnection;
-(void)setContentTaste:(NSInteger)arg0 forAlbumStoreID:(NSInteger)arg1 configuration:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)setContentTaste:(NSInteger)arg0 forAlbumStoreID:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)setContentTaste:(NSInteger)arg0 forMediaItem:(NSInteger)arg1 storeIdentifier:(NSInteger)arg2 configuration:(id)arg3 timeStamp:(id)arg4 withCompletionHandler:(id)arg5 ;
-(void)setContentTaste:(NSInteger)arg0 forMediaItem:(NSInteger)arg1 storeIdentifier:(NSInteger)arg2 timeStamp:(id)arg3 withCompletionHandler:(id)arg4 ;
-(void)setContentTaste:(NSInteger)arg0 forPlaylistGlobalID:(id)arg1 configuration:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)setContentTaste:(NSInteger)arg0 forPlaylistGlobalID:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg0 configuration:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif