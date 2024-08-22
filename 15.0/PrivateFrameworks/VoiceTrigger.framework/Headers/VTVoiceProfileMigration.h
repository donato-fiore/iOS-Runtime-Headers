// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTVOICEPROFILEMIGRATION_H
#define VTVOICEPROFILEMIGRATION_H


#import <Foundation/Foundation.h>


@interface VTVoiceProfileMigration : NSObject



+(BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(BOOL)migrateVoiceProfileToVersion:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;
+(NSUInteger)getCurrentVoiceProfileVersionForLanguageCode:(id)arg0 ;
+(void)updateVoiceProfileVersionFileForLanguageCode:(id)arg0 ;


@end


#endif