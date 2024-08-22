// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPDAILYDOSECURRENTSTORE_H
#define _ATXAPPDAILYDOSECURRENTSTORE_H

@class NSString, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    uint8_t _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}




-(BOOL)isExpiredAt:(id)arg0 ;
-(BOOL)isExpiredNow;
-(CGFloat)currentDoseFor:(id)arg0 ;
-(id)_getCacheFromFile;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_openFd;
-(void)_overwrite;
-(void)_readCacheAndExpiration;
-(void)closePermanently;
-(void)dealloc;
-(void)increaseDoseFor:(id)arg0 by:(CGFloat)arg1 ;
-(void)resetWithDurationMap:(id)arg0 on:(id)arg1 ;


@end


#endif