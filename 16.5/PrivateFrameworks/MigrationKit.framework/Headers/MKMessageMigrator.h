// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMESSAGEMIGRATOR_H
#define MKMESSAGEMIGRATOR_H

@class NSString, NSMutableDictionary;


#import "MKMigrator.h"

@interface MKMessageMigrator : MKMigrator {
    NSString *_accountGUID;
    NSMutableDictionary *_groups;
    *sqlite3 _database;
}




-(BOOL)_import:(id)arg0 ;
-(BOOL)_performSimpleQuery:(id)arg0 ;
-(id)chatIDForMessage:(id)arg0 forHandleIDs:(id)arg1 withGroup:(id)arg2 ;
-(id)handleID:(id)arg0 ;
-(id)handleIDs:(id)arg0 ;
-(id)init;
-(id)insertAttachment:(id)arg0 withMessage:(id)arg1 ;
-(id)insertChatForMessage:(id)arg0 forHandleIDs:(id)arg1 withGroup:(id)arg2 ;
-(id)insertHandle:(id)arg0 ;
-(id)insertMessage:(id)arg0 forHandleID:(id)arg1 withGroup:(id)arg2 ;
-(id)joinAttachment:(id)arg0 message:(id)arg1 ;
-(id)joinChat:(id)arg0 handle:(id)arg1 ;
-(id)joinChat:(id)arg0 message:(id)arg1 date:(NSInteger)arg2 ;
-(void)begin;
-(void)close;
-(void)commit;
-(void)dealloc;
-(void)delete;
-(void)delete:(id)arg0 ;
-(void)import;
-(void)import:(id)arg0 ;
-(void)importDataEncodedInJSON:(id)arg0 ;
-(void)notify;
-(void)open;
-(void)query:(id)arg0 ;
-(void)rollback;
-(void)updateClient;


@end


#endif