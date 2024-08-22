// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYRECORDIMPORTCONFLICT_H
#define PFUBIQUITYRECORDIMPORTCONFLICT_H

@class NSString, NSDictionary, NSDate, NSNumber, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSManagedObject.h"
#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquityImportContext.h"

@interface PFUbiquityRecordImportConflict : NSObject {
    NSString *_conflictingObjectGlobalIDStr;
    NSManagedObject *_sourceObject;
    NSDictionary *_conflictingLogContent;
    PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    int _conflictingLogTransactionType;
    NSDate *_conflictLogDate;
    NSNumber *_conflictingLogTransactionNumber;
    NSArray *_transactionHistory;
    NSDictionary *_globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext *_importContext;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}




+(void)initialize;
-(id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg0 withValue:(id)arg1 withGlobalIDToLocalIDURIMap:(id)arg2 andTransactionLog:(id)arg3 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif