// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKKNOWLEDGESTORE_H
#define CKKNOWLEDGESTORE_H

@class NSURL, NSString;
@protocol CKKnowledgeStoreDelegate;

#import <Foundation/Foundation.h>


@interface CKKnowledgeStore : NSObject {
    ? backingStore;
    ? sparqlQueue;
    ? location;
}


@property (nonatomic, weak) NSObject<CKKnowledgeStoreDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSURL *filePathURL;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *name;


+(id)defaultKnowledgeStore;
+(id)defaultSynchedKnowledgeStore;
+(id)directoryURL;
+(id)inMemoryKnowledgeStore;
+(id)knowledgeStoreWithName:(id)arg0 ;
+(id)synchedKnowledgeStoreWithName:(id)arg0 ;
+(id)userDefaultsKnowledgeStore;
-(BOOL)inferLinkTo:(id)arg0 withPredicate:(id)arg1 when:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeAllValuesAndReturnError:(*id)arg0 ;
-(BOOL)removeEntity:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeValueForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeValuesForKeys:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeValuesMatching:(id)arg0 error:(*id)arg1 ;
-(id)dictionaryRepresentationAndReturnError:(*id)arg0 ;
-(id)dictionaryRepresentationForKeysMatching:(id)arg0 error:(*id)arg1 ;
-(id)entitiesAndReturnError:(*id)arg0 ;
-(id)entityWithIdentifier:(id)arg0 ;
-(id)init;
-(id)keysAndReturnError:(*id)arg0 ;
-(id)keysMatching:(id)arg0 error:(*id)arg1 ;
-(id)subgraphWithEntities:(id)arg0 ;
-(id)triplesMatching:(id)arg0 error:(*id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valuesAndReturnError:(*id)arg0 ;
-(id)valuesForKeysMatching:(id)arg0 error:(*id)arg1 ;
-(id)writeBatch;
-(void)dictionaryRepresentationForKeysMatching:(id)arg0 completionHandler:(id)arg1 ;
-(void)dictionaryRepresentationWithCompletionHandler:(id)arg0 ;
-(void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id)arg0 ;
-(void)entitiesWithCompletionHandler:(id)arg0 ;
-(void)importContentsOfJSONLDAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)importTriplesFromFileAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)inferLinkTo:(id)arg0 withPredicate:(id)arg1 when:(id)arg2 completionHandler:(id)arg3 ;
-(void)keysMatching:(id)arg0 completionHandler:(id)arg1 ;
-(void)keysWithCompletionHandler:(id)arg0 ;
-(void)removeAllValuesWithCompletionHandler:(id)arg0 ;
-(void)removeEntity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeValueForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeValuesForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeValuesMatching:(id)arg0 completionHandler:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)sparqlResultsForQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)triplesMatching:(id)arg0 completionHandler:(id)arg1 ;
-(void)valueForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)valuesForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)valuesForKeysMatching:(id)arg0 completionHandler:(id)arg1 ;
-(void)valuesWithCompletionHandler:(id)arg0 ;


@end


#endif