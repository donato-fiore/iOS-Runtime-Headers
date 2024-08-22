// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUERY_H
#define ICQUERY_H

@class NSString, NSPredicate, NSArray;

#import <Foundation/Foundation.h>

#import "ICQueryObjC.h"

@interface ICQuery : NSObject

@property (readonly, nonatomic) BOOL canBeEdited;
@property (readonly, copy, nonatomic) NSString *entityName;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly) ICQueryObjC *queryObjC;
@property (readonly, nonatomic) NSArray *tagIdentifiers;


+(id)queryForAllTaggedNotesAllowsRecentlyDeleted:(BOOL)arg0 ;
+(id)queryForNotesWithSystemPaperAllowsRecentlyDeleted:(BOOL)arg0 ;
+(id)queryForNotesWithTagIdentifier:(id)arg0 allowsRecentlyDeleted:(BOOL)arg1 ;
+(id)queryForNotesWithTagIdentifiers:(id)arg0 allowsRecentlyDeleted:(BOOL)arg1 ;
+(id)queryForPinnedNotes:(BOOL)arg0 allowsRecentlyDeleted:(BOOL)arg1 ;


@end


#endif