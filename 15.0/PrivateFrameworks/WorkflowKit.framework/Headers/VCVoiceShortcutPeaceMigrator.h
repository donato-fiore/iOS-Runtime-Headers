// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVOICESHORTCUTPEACEMIGRATOR_H
#define VCVOICESHORTCUTPEACEMIGRATOR_H


#import <Foundation/Foundation.h>

#import "WFDatabase.h"

@interface VCVoiceShortcutPeaceMigrator : NSObject

@property (readonly, nonatomic) WFDatabase *database; // ivar: _database


+(void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg0 ;
-(BOOL)migrateObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)migrateWithError:(*id)arg0 ;
-(BOOL)saveRecord:(id)arg0 withIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithDatabase:(id)arg0 ;


@end


#endif