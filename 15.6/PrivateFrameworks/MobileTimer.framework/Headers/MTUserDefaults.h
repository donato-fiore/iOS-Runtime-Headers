// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTUSERDEFAULTS_H
#define MTUSERDEFAULTS_H

@class NSMutableDictionary, NSUserDefaults;
@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface MTUserDefaults : NSObject

@property (retain, nonatomic) NSMutableDictionary *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)_distributedNotificationForLocalNotification:(id)arg0 ;
+(id)_localNotificationForDistributedNotification:(id)arg0 ;
+(id)sharedUserDefaults;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 exists:(*BOOL)arg1 ;
-(CGFloat)timeIntervalForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(CGFloat)timeIntervalForKey:(id)arg0 exists:(*BOOL)arg1 ;
// -(CGFloat)timeIntervalForKey:(id)arg0 isValid:(id)arg1 defaultValue:(unk)arg2  ;
-(NSInteger)integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSInteger)integerForKey:(id)arg0 exists:(*BOOL)arg1 ;
// -(NSInteger)integerForKey:(id)arg0 isValid:(id)arg1 defaultValue:(unk)arg2  ;
-(float)floatForKey:(id)arg0 ;
-(float)floatForKey:(id)arg0 exists:(*BOOL)arg1 ;
-(id)initWithUserDefaults:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 defaultValue:(id)arg1 ;
-(void)_cleanupObserversForNotification:(id)arg0 ;
-(void)_postNotification:(id)arg0 ;
-(void)distributedNotificationPosted:(id)arg0 ;
-(void)registerNotification:(id)arg0 observer:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 notification:(id)arg2 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 notification:(id)arg2 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 notification:(id)arg2 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 notification:(id)arg2 ;
-(void)setTimeInterval:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setTimeInterval:(CGFloat)arg0 forKey:(id)arg1 notification:(id)arg2 ;
-(void)unregisterNotification:(id)arg0 observer:(id)arg1 ;


@end


#endif