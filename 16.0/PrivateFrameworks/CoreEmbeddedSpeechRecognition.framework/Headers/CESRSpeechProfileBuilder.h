// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRSPEECHPROFILEBUILDER_H
#define CESRSPEECHPROFILEBUILDER_H

@class NSXPCConnection, NSMutableArray, NSURL, NSLocale, NSString;

#import <Foundation/Foundation.h>


@interface CESRSpeechProfileBuilder : NSObject {
    NSXPCConnection *_connection;
    NSMutableArray *_serializedItems;
    NSMutableArray *_isBoosted;
    NSUInteger _summedCommittedItemsMemoryInBytes;
    NSUInteger _uncommittedItemsMemoryInBytes;
}


@property (readonly, nonatomic) NSInteger dataProtectionClass; // ivar: _dataProtectionClass
@property (readonly, nonatomic) NSURL *directory; // ivar: _directory
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *userId; // ivar: _userId


+(BOOL)deleteProfileAtDirectory:(id)arg0 locale:(id)arg1 userId:(id)arg2 error:(*id)arg3 ;
+(BOOL)shouldOverrideDeferralForCategory:(id)arg0 updateMode:(NSUInteger)arg1 ;
+(id)CESRErrorForXPCError:(id)arg0 ;
+(id)categoryToFieldTypeMap;
+(id)categoryToLimitHintMap;
+(id)getSpeechLocaleForLocale:(id)arg0 ;
+(id)profileDirPathFromBasePath:(id)arg0 language:(id)arg1 userId:(id)arg2 ;
+(id)profileFilePathFromBasePath:(id)arg0 language:(id)arg1 userId:(id)arg2 ;
+(id)supportedCategories;
+(void)deleteLegacyProfiles;
-(BOOL)_flushItemsWithError:(*id)arg0 ;
-(BOOL)_setProfileConfigWithLanguage:(id)arg0 profileDir:(id)arg1 userId:(id)arg2 dataProtectionClass:(NSInteger)arg3 ;
-(BOOL)addVocabularyItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)addVocabularyItem:(id)arg0 isBoosted:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)beginWithCategoriesAndVersions:(id)arg0 bundleId:(id)arg1 error:(*id)arg2 ;
-(BOOL)cancelCategoriesWithError:(*id)arg0 ;
-(BOOL)finishAndSaveProfile:(BOOL)arg0 error:(*id)arg1 ;
-(NSInteger)getVersionForCategory:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)getGlobalItemsMemoryLimitInBytes;
-(id)_newConnection;
-(id)initWithDirectory:(id)arg0 locale:(id)arg1 userId:(id)arg2 dataProtectionClass:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif