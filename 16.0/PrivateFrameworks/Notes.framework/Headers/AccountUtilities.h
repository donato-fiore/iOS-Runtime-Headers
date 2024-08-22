// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCOUNTUTILITIES_H
#define ACCOUNTUTILITIES_H

@class NSArray, ACAccountStore, NSLock;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NoteContext.h"

@interface AccountUtilities : NSObject {
    NSArray *_accountIDsEnabledForNotes;
    NoteContext *_noteContext;
}


@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) NSObject<OS_dispatch_group> *backgroundDispatchGroup; // ivar: _backgroundDispatchGroup
@property (retain) NSLock *updateAccountInfosLock; // ivar: _updateAccountInfosLock


+(id)sharedAccountUtilities;
-(BOOL)localNotesExist;
-(id)accountIDsEnabledForNotes;
-(id)accountsEnabledForNotes;
-(id)defaultStoreSyncIdWithDesiredSyncId:(id)arg0 ;
-(id)freshContext;
-(id)init;
-(id)localAccountDisplayName;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)dealloc;
-(void)startKeepingAccountInfosUpToDate;
-(void)updateAccountInfos;


@end


#endif