// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMEVENTKITBRIDGINGDATAVIEW_H
#define REMEVENTKITBRIDGINGDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMEventKitBridgingDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)fetchCompletedRemindersWithCompletionDateFrom:(id)arg0 to:(id)arg1 withListIDs:(id)arg2 error:(*id)arg3 ;
-(id)fetchIncompleteRemindersWithDueDateFrom:(id)arg0 to:(id)arg1 withListIDs:(id)arg2 error:(*id)arg3 ;
-(id)fetchListsWithError:(*id)arg0 ;
-(id)fetchRemindersWithListIDs:(id)arg0 error:(*id)arg1 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif