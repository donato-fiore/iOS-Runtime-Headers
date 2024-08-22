// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPCSSQLCACHEPOOL_H
#define CKDPCSSQLCACHEPOOL_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKDPCSSQLCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachesByPath; // ivar: _cachesByPath
@property (retain, nonatomic) NSMutableDictionary *checkoutsByPath; // ivar: _checkoutsByPath


+(id)sharedPool;
-(id)_init;
-(id)cacheForContainer:(id)arg0 ;
-(void)releaseCache:(id)arg0 forContainer:(id)arg1 ;


@end


#endif