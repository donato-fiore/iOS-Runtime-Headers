// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INVOCABULARYGENERATIONDIFF_H
#define _INVOCABULARYGENERATIONDIFF_H

@class NSString, NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface _INVocabularyGenerationDiff : NSObject

@property (copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (nonatomic) NSInteger countOfVocabularyItemsAfterApplying; // ivar: _countOfVocabularyItemsAfterApplying
@property (copy, nonatomic) NSSet *deletedSiriIDs; // ivar: _deletedSiriIDs
@property (copy, nonatomic) NSString *intentSlotName; // ivar: _intentSlotName
@property (nonatomic) BOOL isFullReset; // ivar: _isFullReset
@property (copy, nonatomic) NSArray *updatedVocabularyItems; // ivar: _updatedVocabularyItems


-(BOOL)hasChanges;
-(id)description;


@end


#endif