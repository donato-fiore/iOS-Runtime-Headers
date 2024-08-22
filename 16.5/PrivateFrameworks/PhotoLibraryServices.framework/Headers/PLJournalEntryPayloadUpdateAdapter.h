// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLJOURNALENTRYPAYLOADUPDATEADAPTER_H
#define PLJOURNALENTRYPAYLOADUPDATEADAPTER_H

@class NSManagedObject;
@protocol PLJournalEntryPayloadUpdateAdapter;

#import <Foundation/Foundation.h>


@interface PLJournalEntryPayloadUpdateAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter>

 {
    NSManagedObject *_managedObject;
}




-(BOOL)isValidForJournalPersistence;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg0 ;
-(id)initWithManagedObject:(id)arg0 ;
-(id)managedObject;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;
-(id)payloadsForChangedKeys:(id)arg0 ;


@end


#endif