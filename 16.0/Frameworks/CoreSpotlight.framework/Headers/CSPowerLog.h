// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPOWERLOG_H
#define CSPOWERLOG_H

@class NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CSPowerLog : NSObject

@property (nonatomic) NSUInteger cachedCount; // ivar: _cachedCount
@property (retain, nonatomic) NSDate *lastFlushDate; // ivar: _lastFlushDate
@property (retain, nonatomic) NSMutableDictionary *operationsByBundleID; // ivar: _operationsByBundleID
@property (retain, nonatomic) NSMutableDictionary *reasonedOperationsByBundleID; // ivar: _reasonedOperationsByBundleID


+(id)keyNameForOperation:(NSInteger)arg0 ;
+(id)sharedInstance;
-(id)init;
-(void)_addToDictionary:(NSInteger)arg0 bundleID:(id)arg1 itemCount:(NSUInteger)arg2 ;
-(void)_addToDictionary:(NSInteger)arg0 bundleID:(id)arg1 itemCount:(NSUInteger)arg2 reason:(id)arg3 ;
-(void)flushToPowerLog_locked_and_unlock;
-(void)logWithBundleID:(id)arg0 indexOperation:(NSInteger)arg1 itemCount:(NSUInteger)arg2 ;
-(void)logWithBundleID:(id)arg0 indexOperation:(NSInteger)arg1 itemCount:(NSUInteger)arg2 reason:(id)arg3 ;
-(void)updateDictionaryAndUnlock:(NSUInteger)arg0 cacheCount:(NSInteger)arg1 keyName:(id)arg2 operationDictionary:(id)arg3 ;
-(void)updateDictionaryAndUnlock:(NSUInteger)arg0 keyName:(id)arg1 operationDictionary:(id)arg2 ;


@end


#endif