// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTAGSETTINGS_H
#define FCTAGSETTINGS_H

@class NSMutableDictionary;
@protocol FCTagSettingsDelegate;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"

@interface FCTagSettings : NSObject {
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id<FCTagSettingsDelegate> *_delegate;
}




+(id)commandsToMergeLocalDataToCloud:(id)arg0 ;
-(id)accessTokenForTagID:(id)arg0 ;
-(id)allTagSettingsRecordNames;
-(id)allTagSettingsRecords;
-(id)authenticatedAccessTokensByTagID;
-(id)contentScaleForTagID:(id)arg0 ;
-(id)fontSizeForTagID:(id)arg0 ;
-(id)initWithStore:(id)arg0 tagSettingsDelegate:(id)arg1 ;
-(id)webAccessOptedInTagIDs;
-(void)handleSyncWithDeletedTagSettingsRecordName:(id)arg0 ;
-(void)handleSyncWithTagSettingsRecord:(id)arg0 ;
-(void)loadLocalCachesFromStore;
-(void)setAccessTokenForTagID:(id)arg0 accessToken:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)setContentScaleForTagID:(id)arg0 contentScale:(id)arg1 ;
-(void)setFontSizeForTagID:(id)arg0 fontSize:(id)arg1 ;
-(void)setWebAccessOptInForTagID:(id)arg0 webAccessOptIn:(BOOL)arg1 ;
-(void)syncForTagID:(id)arg0 ;


@end


#endif