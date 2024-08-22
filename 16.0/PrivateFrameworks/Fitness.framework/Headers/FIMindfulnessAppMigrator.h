// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIMINDFULNESSAPPMIGRATOR_H
#define FIMINDFULNESSAPPMIGRATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FIMindfulnessAppMigrator : NSObject {
    NSString *_container;
}




-(NSInteger)_integerForKey:(id)arg0 exists:(*BOOL)arg1 ;
-(id)init;
-(id)initWithContainer:(id)arg0 ;
-(void)_removeObjectForKey:(id)arg0 ;
-(void)_setInteger:(NSInteger)arg0 key:(id)arg1 ;
-(void)_synchronize;
-(void)migrateIfNeeded;


@end


#endif