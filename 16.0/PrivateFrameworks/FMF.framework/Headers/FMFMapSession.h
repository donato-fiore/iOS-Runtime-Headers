// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFMAPSESSION_H
#define FMFMAPSESSION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "FMFMapCache.h"

@interface FMFMapSession : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) FMFMapCache *mapCache; // ivar: _mapCache


+(id)newConnection;
+(id)sharedInstance;
-(void)gridImageForScreenRatio:(CGFloat)arg0 andCompletion:(id)arg1 ;
-(void)gridImageForWidth:(CGFloat)arg0 height:(CGFloat)arg1 cache:(BOOL)arg2 andCompletion:(id)arg3 ;
-(void)mapImageForLocation:(id)arg0 altitude:(CGFloat)arg1 pitch:(CGFloat)arg2 screenRatio:(CGFloat)arg3 andCompletion:(id)arg4 ;
-(void)mapImageForLocation:(id)arg0 altitude:(CGFloat)arg1 pitch:(CGFloat)arg2 width:(CGFloat)arg3 height:(CGFloat)arg4 cache:(BOOL)arg5 andCompletion:(id)arg6 ;
-(void)mapImageForLocation:(id)arg0 isShifted:(BOOL)arg1 altitude:(CGFloat)arg2 pitch:(CGFloat)arg3 screenRatio:(CGFloat)arg4 andCompletion:(id)arg5 ;
-(void)mapImageForLocation:(id)arg0 isShifted:(BOOL)arg1 altitude:(CGFloat)arg2 pitch:(CGFloat)arg3 width:(CGFloat)arg4 height:(CGFloat)arg5 cache:(BOOL)arg6 andCompletion:(id)arg7 ;
-(void)mapImageForLocation:(id)arg0 isShifted:(BOOL)arg1 radius:(CGFloat)arg2 width:(CGFloat)arg3 height:(CGFloat)arg4 cache:(BOOL)arg5 andCompletion:(id)arg6 ;
-(void)mapImageForLocation:(id)arg0 radius:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 cache:(BOOL)arg4 andCompletion:(id)arg5 ;
-(void)mapImageForRequest:(id)arg0 andCompletion:(id)arg1 ;
-(void)noLocationImageForScreenRatio:(CGFloat)arg0 andCompletion:(id)arg1 ;
-(void)noLocationImageForWidth:(CGFloat)arg0 height:(CGFloat)arg1 cache:(BOOL)arg2 andCompletion:(id)arg3 ;


@end


#endif