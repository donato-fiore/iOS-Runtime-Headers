// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUDEVELOPERSETTINGSDATABASE_H
#define AUDEVELOPERSETTINGSDATABASE_H

@class NSUserDefaults, NSDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface AUDeveloperSettingsDatabase : NSObject {
    NSUserDefaults *_database;
    NSObject<OS_os_log> *_log;
}


@property (readonly) NSDictionary *seedParticipationDictionary;


+(id)sharedDatabase;
-(BOOL)isSeedParticipationEnabled:(id)arg0 ;
-(BOOL)isValidLocationType:(NSUInteger)arg0 ;
-(NSUInteger)urlLocationTypeForAccessory:(id)arg0 ;
-(id)description;
-(id)identifierForName:(id)arg0 serialNumber:(id)arg1 fusingType:(NSUInteger)arg2 ;
-(id)init;
-(void)accessoryNameForIdentifier:(id)arg0 name:(*id)arg1 serialNumber:(*id)arg2 fusingType:(*NSUInteger)arg3 ;
-(void)addAccessory:(id)arg0 locationType:(NSUInteger)arg1 ;
-(void)removeAccessory:(id)arg0 ;
-(void)removeAllAccessories;
-(void)updateAccessory:(id)arg0 locationType:(NSUInteger)arg1 ;


@end


#endif