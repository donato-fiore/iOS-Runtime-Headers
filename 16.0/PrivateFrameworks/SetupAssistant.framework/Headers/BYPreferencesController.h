// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYPREFERENCESCONTROLLER_H
#define BYPREFERENCESCONTROLLER_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BYPreferencesController : NSObject

@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSMutableDictionary *preferences; // ivar: _preferences
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)buddyPreferences;
+(id)buddyPreferencesEphemeral;
+(id)buddyPreferencesExcludedFromBackup;
+(id)buddyPreferencesInternal;
+(id)genericPreferencesEphemeral;
+(void)flushEverything;
+(void)persistEverything;
-(BOOL)boolForKey:(id)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 includeCache:(BOOL)arg1 ;
-(void)flush;
-(void)persist;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 onlyFromMemory:(BOOL)arg1 ;
-(void)reset;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 persistImmediately:(BOOL)arg2 ;


@end


#endif