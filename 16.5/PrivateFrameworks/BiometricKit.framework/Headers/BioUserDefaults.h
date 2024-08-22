// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOUSERDEFAULTS_H
#define BIOUSERDEFAULTS_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface BioUserDefaults : NSObject {
    NSMutableDictionary *_registeredDefaults;
    NSMutableArray *_updateBlocks;
}




+(id)preferenceObjectForKey:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(BOOL)setObject:(id)arg0 forKey:(id)arg1 ;
-(BOOL)synchronize;
-(NSInteger)integerForKey:(id)arg0 ;
-(NSUInteger)unsignedIntegerForKey:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)objectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)stateDictionary;
-(id)stringForKey:(id)arg0 ;
-(int)intForKey:(id)arg0 ;
-(unsigned int)unsignedIntForKey:(id)arg0 ;
-(void)registerDefaults:(id)arg0 ;
-(void)registerUpdateNotification:(id)arg0 ;
-(void)unregisterUpdateNotification:(id)arg0 ;
-(void)updateNotification;


@end


#endif