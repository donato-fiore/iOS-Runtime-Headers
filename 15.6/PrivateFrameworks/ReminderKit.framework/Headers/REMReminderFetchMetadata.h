// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMREMINDERFETCHMETADATA_H
#define REMREMINDERFETCHMETADATA_H

@class NSArray, NSDictionary;


#import "REMFetchMetadata.h"

@interface REMReminderFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSArray *dueDateCounts; // ivar: _dueDateCounts
@property (readonly, nonatomic) NSDictionary *subtaskCounts; // ivar: _subtaskCounts


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDueDateCounts:(id)arg0 ;
-(id)initWithSubtaskCounts:(id)arg0 ;
-(id)initWithSubtaskCounts:(id)arg0 dueDateCounts:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif