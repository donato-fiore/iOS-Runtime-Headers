// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNCHANGEHISTORYGROUPREFILLSTRATEGY_H
#define _CNCHANGEHISTORYGROUPREFILLSTRATEGY_H

@protocol CNEnumeratorRefillStrategy;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


-(id)batchesToRepresentObjects:(id)arg0 suggestedBatchSize:(NSUInteger)arg1 ;
-(id)fetchGroupsWithIdentifiers:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 ;
-(id)objectsRepresentedByBatch:(id)arg0 ;
-(id)updateChanges:(id)arg0 withFetchedGroups:(id)arg1 ;


@end


#endif