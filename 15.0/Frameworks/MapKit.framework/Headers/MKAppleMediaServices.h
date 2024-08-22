// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKAPPLEMEDIASERVICES_H
#define MKAPPLEMEDIASERVICES_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MKAppleMediaServices : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)appStoreAppWithBundleIdentifiers:(id)arg0 artworkSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 completion:(id)arg3 ;
-(void)appStoreAppWithBundleIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)appStoreAppWithIdentifiers:(id)arg0 artworkSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 type:(NSInteger)arg3 completion:(id)arg4 ;
-(void)appStoreAppWithIdentifiers:(id)arg0 bundleIdentifiers:(id)arg1 artworkSize:(struct CGSize )arg2 screenScale:(CGFloat)arg3 type:(NSInteger)arg4 completion:(id)arg5 ;
-(void)appStoreAppWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)mediaResultWithIdentifiers:(id)arg0 bundleIdentifiers:(id)arg1 artworkSize:(struct CGSize )arg2 screenScale:(CGFloat)arg3 type:(NSInteger)arg4 completion:(id)arg5 ;
-(void)openConnectionIfNeeded;


@end


#endif