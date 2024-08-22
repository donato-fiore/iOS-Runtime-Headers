// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUDEVELOPERSETTINGSDATABASE_H
#define AUDEVELOPERSETTINGSDATABASE_H

@class NSDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface AUDeveloperSettingsDatabase : NSObject {
    NSObject<OS_os_log> *_log;
}


@property (readonly) NSDictionary *accessoriesDictionary;


+(id)sharedDatabase;
-(BOOL)isSeedParticipationEnabled:(id)arg0 ;
-(BOOL)isValidLocationType:(NSUInteger)arg0 ;
-(NSUInteger)urlLocationTypeForAccessory:(id)arg0 ;
-(id)init;
-(id)seedParticipationDictionary;
-(void)accessoryNameForIdentifier:(id)arg0 name:(*id)arg1 serialNumber:(*id)arg2 fusingType:(*NSUInteger)arg3 ;
-(void)addAccessoryWithSerialNumber:(id)arg0 info:(id)arg1 ;
-(void)migrateExistingDefaults;
-(void)updateAccessory:(id)arg0 locationType:(NSUInteger)arg1 ;


@end


#endif