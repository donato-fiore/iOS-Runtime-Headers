// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEATHERINMEMORYDEFAULTS_H
#define WEATHERINMEMORYDEFAULTS_H

@class NSString, NSMutableDictionary;
@protocol WeatherPreferencesPersistence;

#import <Foundation/Foundation.h>


@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *inMemoryStore; // ivar: _inMemoryStore
@property (readonly) Class superclass;
@property (readonly) BOOL synchronizeWasCalled; // ivar: _synchronizeWasCalled


-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)synchronize;
-(id)arrayForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(id)arg0 ;


@end


#endif