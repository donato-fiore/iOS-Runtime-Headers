// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUERY_H
#define ICQUERY_H

@class NSString, NSPredicate;

#import <Foundation/Foundation.h>

#import "ICQueryObjC.h"

@interface ICQuery : NSObject

@property (readonly, nonatomic) BOOL canBeEdited;
@property (readonly, copy, nonatomic) NSString *entityName;
@property (readonly, nonatomic) NSUInteger minimumSupportedVersion;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly) ICQueryObjC *queryObjC;


+(id)queryForNotesMatchingFilterSelection:(id)arg0 ;
+(id)queryForNotesMatchingTagSelection:(id)arg0 ;
+(id)queryForPinnedNotes:(BOOL)arg0 allowsRecentlyDeleted:(BOOL)arg1 ;
+(id)queryForSharedNotes:(BOOL)arg0 allowsRecentlyDeleted:(BOOL)arg1 ;
+(id)queryForSystemPaperNotesAllowsRecentlyDeleted:(BOOL)arg0 ;
-(id)filterSelectionWithManagedObjectContext:(id)arg0 account:(id)arg1 ;
-(id)removingTagIdentifier:(id)arg0 ;
-(id)replacingTagIdentifier:(id)arg0 withNewTagIdentifier:(id)arg1 ;
-(id)tagSelectionWithManagedObjectContext:(id)arg0 ;


@end


#endif