// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFSQLGENERATIONCONTEXT_H
#define _MFSQLGENERATIONCONTEXT_H

@class EDSearchableIndex, EFMutableInt64Set, EFSQLPropertyMapper;

#import <Foundation/Foundation.h>


@interface _MFSQLGenerationContext : NSObject {
    EDSearchableIndex *searchableIndex;
    EFMutableInt64Set *mailboxIDs;
    unsigned int tables;
    unsigned int baseTable;
    EFSQLPropertyMapper *propertyMapper;
    BOOL usedBaseTable;
    BOOL haveLibraryIDCriterion;
    BOOL protectedDataAvailable;
}






@end


#endif