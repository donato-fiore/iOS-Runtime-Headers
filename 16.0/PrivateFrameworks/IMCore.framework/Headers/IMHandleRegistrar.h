// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMHANDLEREGISTRAR_H
#define IMHANDLEREGISTRAR_H

@class NSMutableDictionary, NSHashTable, IMBusinessNameManager;

#import <Foundation/Foundation.h>


@interface IMHandleRegistrar : NSObject {
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_IDToHandlesMap;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}




+(id)sharedInstance;
-(id)CNIDToHandlesMap;
-(id)IDToHandlesMap;
-(id)_accountSiblingsForHandle:(id)arg0 ;
-(id)_chatSiblingsForHandle:(id)arg0 ;
-(id)_existingAccountSiblingsForHandle:(id)arg0 ;
-(id)_existingChatSiblingsForHandle:(id)arg0 ;
-(id)allIMHandles;
-(id)businessNameForUID:(id)arg0 updateHandler:(id)arg1 ;
-(id)getIDsForAllIMHandles;
-(id)getIDsForFinalBatch;
-(id)getIDsForInitialBatch;
-(id)getIMHandlesForID:(id)arg0 ;
-(id)handlesForCNIdentifier:(id)arg0 ;
-(id)init;
-(id)siblingsForIMHandle:(id)arg0 ;
-(void)_addIMHandleToIDToHandlesMap:(id)arg0 ;
-(void)_addressBookChanged;
-(void)_buildSiblingsForIMHandle:(id)arg0 ;
-(void)_clearSiblingsCacheForIMHandle:(id)arg0 rebuildAfter:(BOOL)arg1 ;
-(void)_dumpOutAllIMHandles;
-(void)_dumpOutAllIMHandlesForAccount:(id)arg0 ;
-(void)_emptySiblingCacheForIMHandleGUID:(id)arg0 ;
-(void)_handleAddContactChangeHistoryEvent:(id)arg0 ;
-(void)_handleDeleteContactChangeHistoryEvent:(id)arg0 ;
-(void)_handleDropEverythingChangeHistoryEvent;
-(void)_handleUpdateContactChangeHistoryEvent:(id)arg0 ;
-(void)_postContactChangeHistoryEventClientNotifications;
-(void)_removeIMHandleToIDToHandlesMap:(id)arg0 ;
-(void)addHandleToCNIDMap:(id)arg0 CNContact:(id)arg1 ;
-(void)clearCNIDToHandlesMap;
-(void)clearSiblingCacheForIMHandle:(id)arg0 ;
-(void)processContactChangeHistoryEventWithHandleIDs:(id)arg0 andCNContact:(id)arg1 ;
-(void)registerIMHandle:(id)arg0 ;
-(void)removeHandleFromCNIDMap:(id)arg0 withCNID:(id)arg1 ;
-(void)unregisterIMHandle:(id)arg0 ;


@end


#endif