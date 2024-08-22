// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUAPPLICATIONDEFAULTS_H
#define MPUAPPLICATIONDEFAULTS_H

@class NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPUApplicationDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_applicationIdentifier;
    NSDictionary *_defaultValues;
    NSUInteger _referenceCountForDefferringUpdates;
}




-(BOOL)boolForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(id)_defaultsDidChangeNotificationName;
-(id)_objectForKey:(id)arg0 expectedTypeID:(NSUInteger)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)dateForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)initWithApplicationIdentifier:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(struct __CFString *)_defaultsDomain;
-(void)_applyUpdates;
-(void)_defaultsDidChange;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)performBatchUpdates:(id)arg0 ;
-(void)registerDefaults:(id)arg0 ;
-(void)removeValueForKey:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDate:(id)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif