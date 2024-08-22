// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSECTIONEDIDENTIFIERLISTTAILENTRY_H
#define MPSECTIONEDIDENTIFIERLISTTAILENTRY_H

@class NSString;
@protocol MPSectionedIdentifierListEnumerationTrackingEntry;


#import "MPSectionedIdentifierListEntry.h"
#import "MPSectionedIdentifierListHeadEntry.h"

@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry>



@property (readonly, nonatomic) NSInteger branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entryType;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MPSectionedIdentifierListHeadEntry *sectionHeadEntry; // ivar: _sectionHeadEntry
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly) Class superclass;


+(id)tailEntryWithSectionHeadEntry:(id)arg0 ;
-(id)previousEntry;


@end


#endif