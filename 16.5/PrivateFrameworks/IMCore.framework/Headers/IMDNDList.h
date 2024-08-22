// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDNDLIST_H
#define IMDNDLIST_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface IMDNDList : NSObject

@property (retain, nonatomic) NPSManager *syncManager; // ivar: _syncManager


+(id)sharedList;
-(BOOL)isMutedChat:(id)arg0 ;
-(BOOL)isMutedChatIdentifier:(id)arg0 handleIDs:(id)arg1 style:(unsigned char)arg2 isSMS:(BOOL)arg3 ;
-(id)currentList;
-(id)dndIdentifiersForChat:(id)arg0 ;
-(id)groupHashForChat:(id)arg0 ;
-(id)groupHashForHandleIDs:(id)arg0 ;
-(id)init;
-(id)unmuteDateForChat:(id)arg0 ;
-(id)unmuteDateForIdentifier:(id)arg0 ;
-(void)_handleChatGroupIDDidChangeNotification:(id)arg0 ;
-(void)_handleDNDListChanged;
-(void)_synchronizeDNDList:(id)arg0 syncToPairedDevice:(BOOL)arg1 ;
-(void)_updateGroupID:(id)arg0 toGroupID:(id)arg1 forChat:(id)arg2 ;
-(void)dealloc;
-(void)muteChat:(id)arg0 untilDate:(id)arg1 ;
-(void)muteChat:(id)arg0 untilDate:(id)arg1 syncToPairedDevice:(BOOL)arg2 ;
-(void)muteChat:(id)arg0 usingIdentifier:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(BOOL)arg3 ;
-(void)syncToPairedDeviceIncludingVersion:(BOOL)arg0 ;
-(void)unmuteChat:(id)arg0 usingIdentifier:(id)arg1 syncToPairedDevice:(BOOL)arg2 ;


@end


#endif