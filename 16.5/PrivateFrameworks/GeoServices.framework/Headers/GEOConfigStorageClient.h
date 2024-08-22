// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGSTORAGECLIENT_H
#define GEOCONFIGSTORAGECLIENT_H

@class NSString;
@protocol GEOConfigStorageReadWrite;

#import <Foundation/Foundation.h>


@interface GEOConfigStorageClient : NSObject <GEOConfigStorageReadWrite>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(id)_init;
-(id)getAllKeysAndValuesForOptions:(NSUInteger)arg0 ;
-(id)getConfigValueForKey:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 source:(*NSInteger)arg3 ;
-(void)getConfigValueForKey:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 result:(id)arg3 ;
-(void)getExpiringKeys:(NSUInteger)arg0 result:(id)arg1 ;
-(void)resync;
-(void)setConfigKeyExpiry:(id)arg0 options:(NSUInteger)arg1 date:(id)arg2 osVersion:(id)arg3 ;
-(void)setConfigValue:(id)arg0 forKey:(id)arg1 options:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif