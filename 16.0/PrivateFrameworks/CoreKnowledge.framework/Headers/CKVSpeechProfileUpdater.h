// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSPEECHPROFILEUPDATER_H
#define CKVSPEECHPROFILEUPDATER_H

@class NSString, CESRSpeechProfileBuilder;
@protocol CKVDatabaseReadOnlyAccess;

#import <Foundation/Foundation.h>

#import "CKVSpeechCategoryGroup.h"
#import "CKVSpeechProfileLog.h"

@interface CKVSpeechProfileUpdater : NSObject {
    CKVSpeechCategoryGroup *_group;
    NSString *_description;
    NSObject<CKVDatabaseReadOnlyAccess> *_database;
    CKVSpeechProfileLog *_log;
}


@property (readonly, nonatomic) CESRSpeechProfileBuilder *builder; // ivar: _builder


+(void)_removeProfileWithLog:(id)arg0 userId:(id)arg1 profileDirectory:(id)arg2 ;
+(void)_updateProfileVersion:(id)arg0 withRetry:(BOOL)arg1 group:(id)arg2 log:(id)arg3 userId:(id)arg4 description:(id)arg5 profileDirectory:(id)arg6 protectionClass:(int)arg7 database:(id)arg8 updateType:(unsigned char)arg9 ;
+(void)deleteLegacyProfiles;
+(void)rebuildProfileWithUserId:(id)arg0 description:(id)arg1 profileDirectory:(id)arg2 protectionClass:(int)arg3 database:(id)arg4 settings:(id)arg5 ;
+(void)registerUpdateForItemType:(NSInteger)arg0 originAppId:(id)arg1 fieldTypes:(id)arg2 options:(unsigned short)arg3 userId:(id)arg4 description:(id)arg5 profileDirectory:(id)arg6 protectionClass:(int)arg7 database:(id)arg8 settings:(id)arg9 ;
+(void)verifyProfileWithUserId:(id)arg0 description:(id)arg1 profileDirectory:(id)arg2 protectionClass:(int)arg3 database:(id)arg4 settings:(id)arg5 ;
-(BOOL)_updateProfile:(id)arg0 withType:(unsigned char)arg1 error:(*id)arg2 ;
-(id)_versionForCategory:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithBuilder:(id)arg0 description:(id)arg1 database:(id)arg2 group:(id)arg3 log:(id)arg4 ;
-(void)_endSpeechProfileUpdateSignpost:(NSUInteger)arg0 updateResult:(unsigned char)arg1 updateType:(unsigned char)arg2 itemCount:(NSUInteger)arg3 ;


@end


#endif