// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPOLICYBASEDPERSISTING_H
#define _CDPOLICYBASEDPERSISTING_H

@protocol _CDContextPersisting;

#import <Foundation/Foundation.h>


@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting>



@property (readonly, nonatomic) NSObject<_CDContextPersisting> *persistenceSurvivingReboot; // ivar: _persistenceSurvivingReboot
@property (readonly, nonatomic) NSObject<_CDContextPersisting> *persistenceSurvivingRelaunch; // ivar: _persistenceSurvivingRelaunch


+(id)persistenceWithPersistenceSurvivingReboot:(id)arg0 persistenceSurvivingRelaunch:(id)arg1 ;
-(id)initWithPersistenceSurvivingReboot:(id)arg0 persistenceSurvivingRelaunch:(id)arg1 ;
-(id)loadRegistrations;
-(id)loadValues;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg0 ;
-(void)deleteRegistration:(id)arg0 ;
-(void)saveRegistration:(id)arg0 ;
-(void)saveValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif