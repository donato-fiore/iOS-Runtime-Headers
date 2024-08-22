// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSSCACHINGSERVICE_H
#define SFSSCACHINGSERVICE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface SFSSCachingService : NSObject

@property (retain, nonatomic) NSCache *memoryCache; // ivar: _memoryCache


+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)clear;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif