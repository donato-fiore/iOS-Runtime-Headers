// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDERFETCHEXECUTOR_H
#define REMREMINDERFETCHEXECUTOR_H

@class REMFetchExecutor, NSArray;


#import "REMReminderPredicateDescriptor.h"

@interface REMReminderFetchExecutor : REMFetchExecutor

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) REMReminderPredicateDescriptor *predicateDescriptor; // ivar: _predicateDescriptor
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicateDescriptor:(id)arg0 sortDescriptors:(id)arg1 options:(NSUInteger)arg2 ;
-(id)resultsFromFetchResult:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)resultsFromFetchResult:(id)arg0 inParentReminder:(id)arg1 error:(*id)arg2 ;
-(id)resultsFromFetchResult:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif