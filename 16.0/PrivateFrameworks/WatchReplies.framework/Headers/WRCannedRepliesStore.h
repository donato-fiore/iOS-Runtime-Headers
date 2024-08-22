// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WRCANNEDREPLIESSTORE_H
#define WRCANNEDREPLIESSTORE_H

@class NSString, NSArray, NPSDomainAccessor, NPSManager;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "WRReplyStoreInfo.h"

@interface WRCannedRepliesStore : NSObject {
    NSUInteger _category;
    WRReplyStoreInfo *_info;
    NSString *_cachedLanguage;
    NSArray *_cachedLocalizedReplies;
    NSArray *_cannedReplies;
    BOOL _didLocalizeDefaultReplies;
    BOOL _didMigrationCheck;
    NPSDomainAccessor *_domainAccessor;
    NSObject<OS_os_log> *_log;
    NPSManager *_npsManager;
}




+(BOOL)isTinker;
+(BOOL)supportsEnhancedEditing;
+(id)supportedLanguages;
-(BOOL)includeSmartReplies;
-(BOOL)supportsSmartReplies;
-(BOOL)usesFormalReplies;
-(id)cannedReplies;
-(id)domainAccessor;
-(id)init;
-(id)initWithCategory:(NSUInteger)arg0 ;
-(id)keyForDefaultReply:(id)arg0 ;
-(id)localizedDefaultReply:(id)arg0 ;
-(id)localizedFormalDefaultReply:(id)arg0 ;
-(id)migrateRepliesIfNeeded:(id)arg0 ;
-(id)npsManager;
-(id)repliesForLanguage:(id)arg0 ;
-(void)dealloc;
-(void)handleStoreChange;
-(void)invalidateCachesIfNeededForLanguage:(id)arg0 ;
-(void)loadCannedRepliesIfNeeded;
-(void)localizeDefaultRepliesIfNeeded;
-(void)saveReplies:(id)arg0 ;
-(void)setCannedReplies:(id)arg0 ;
-(void)setIncludeSmartReplies:(BOOL)arg0 ;


@end


#endif