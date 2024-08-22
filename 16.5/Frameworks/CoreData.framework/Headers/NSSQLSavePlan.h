// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLSAVEPLAN_H
#define NSSQLSAVEPLAN_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSSQLSaveChangesRequestContext.h"

@interface NSSQLSavePlan : NSObject {
    NSSQLSaveChangesRequestContext *_requestContext;
    *__CFDictionary _changeCache;
    *__CFDictionary _insertCache;
    *__CFDictionary _toManyCache;
    NSMutableArray *_rowsToDelete;
    NSMutableSet *_updatedByRequest;
    NSMutableSet *_updatedByForeignKey;
    NSMutableSet *_rowsToAddToRowCache;
    NSMutableSet *_objectIDsToRemoveFromRowCache;
    *__CFDictionary _updatedFOKRowsInCurrentSave;
    *__CFDictionary _deletedFOKRowsInCurrentSave;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableArray *_externalDataReferencesToDelete;
    NSMutableArray *_fileBackedFuturesToCopy;
    NSMutableArray *_fileBackedFuturesToDelete;
    NSMutableDictionary *_toManyRelationshipChanges;
    NSMutableDictionary *_usedIndexes;
    int _transactionInMemorySequence;
    _sqlSaveFlags _flags;
}




-(id)initForRequestContext:(id)arg0 ;
-(void)dealloc;


@end


#endif