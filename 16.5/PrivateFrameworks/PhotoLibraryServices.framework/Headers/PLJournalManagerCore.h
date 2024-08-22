// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLJOURNALMANAGERCORE_H
#define PLJOURNALMANAGERCORE_H

@class NSString, NSURL, NSMutableSet, NSMutableDictionary, NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface PLJournalManagerCore : NSObject {
    NSString *_name;
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
    NSMutableSet *_payloadClassIDs;
    NSMutableDictionary *_payloadClassesByEntityName;
    NSMutableDictionary *_payloadClassesByAdditionalEntityName;
    NSMutableDictionary *_payloadClassesByPayloadClassID;
}


@property (readonly) NSURL *baseURL;
@property (readonly) NSURL *historyTokenURL;
@property (readonly) NSString *name;
@property (readonly) NSSet *payloadClassIDs;
@property (readonly) NSArray *payloadClasses; // ivar: _payloadClasses


-(BOOL)appendSnapshotWithJournal:(id)arg0 usingManagedObjectContext:(id)arg1 changedKeys:(id)arg2 error:(*id)arg3 ;
-(BOOL)createSnapshotWithJournal:(id)arg0 createOnlyIfNecessary:(BOOL)arg1 usingManagedObjectContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)saveHistoryToken:(id)arg0 error:(*id)arg1 ;
-(Class)payloadClassForAdditionalEntityName:(id)arg0 ;
-(Class)payloadClassForEntityName:(id)arg0 ;
-(Class)payloadClassForPayloadClassID:(id)arg0 ;
-(id)_nextValidPayloadWithObjectEnumerator:(id)arg0 changedKeys:(id)arg1 payloadClass:(Class)arg2 ;
-(id)_objectEnumeratorForJournal:(id)arg0 usingManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 baseURL:(id)arg1 payloadClasses:(id)arg2 ;
-(id)readHistoryTokenWithError:(*id)arg0 ;
-(void)removeHistoryToken;
-(void)validatePayloadClassesForManagedObjectModel:(id)arg0 ;


@end


#endif