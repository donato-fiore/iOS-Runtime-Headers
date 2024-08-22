// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NANORESOURCEGRABBER_H
#define NANORESOURCEGRABBER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NanoResourceGrabber : NSObject

@property BOOL connectionMayBeValid; // ivar: _connectionMayBeValid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iconCacheQueue; // ivar: _iconCacheQueue
@property (retain, nonatomic) NSXPCConnection *nrgdConnection; // ivar: _nrgdConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)_iconVariant:(int)arg0 fromURL:(id)arg1 ;
+(id)liIconVariants;
+(id)nrgIconVariants;
+(id)sharedInstance;
-(id)_getCachedIconForBundleID:(id)arg0 iconVariant:(int)arg1 ;
-(id)connectToService;
-(id)init;
-(void)_getPhoneIconForBundleID:(id)arg0 iconVariant:(int)arg1 timeout:(CGFloat)arg2 block:(id)arg3 ;
-(void)_getPhoneLocalIconForBundleID:(id)arg0 iconVariant:(int)arg1 block:(id)arg2 ;
// -(void)_getRemoteIconForBundleIDBypassingCache:(id)arg0 iconVariant:(int)arg1 block:(id)arg2 timeout:(unk)arg3  ;
-(void)_setCachedIcon:(id)arg0 forIconVariant:(int)arg1 inBundleID:(id)arg2 ;
-(void)dealloc;
-(void)getAppViewListImage:(struct CGSize )arg0 completion:(id)arg1 ;
// -(void)getCachedIconForBundleID:(id)arg0 iconVariant:(int)arg1 outIconImage:(*id)arg2 queue:(id)arg3 updateBlock:(id)arg4 timeout:(unk)arg5  ;
-(void)getCachedIconForBundleID:(id)arg0 iconVariant:(int)arg1 outIconImage:(*id)arg2 updateBlock:(id)arg3 ;
// -(void)getIconForBundleID:(id)arg0 iconVariant:(int)arg1 block:(id)arg2 timeout:(unk)arg3  ;
// -(void)getIconForBundleID:(id)arg0 iconVariant:(int)arg1 queue:(id)arg2 block:(id)arg3 timeout:(unk)arg4  ;


@end


#endif