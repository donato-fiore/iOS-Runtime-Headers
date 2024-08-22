// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTFETCHMETADATA_H
#define REMLISTFETCHMETADATA_H

@class NSDictionary;


#import "REMFetchMetadata.h"

@interface REMListFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSDictionary *incompleteReminderCounts; // ivar: _incompleteReminderCounts
@property (readonly, nonatomic) NSInteger scheduledCount; // ivar: _scheduledCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIncompleteReminderCounts:(id)arg0 scheduledCount:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif