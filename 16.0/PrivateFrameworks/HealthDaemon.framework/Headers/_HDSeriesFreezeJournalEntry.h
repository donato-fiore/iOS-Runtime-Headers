// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSERIESFREEZEJOURNALENTRY_H
#define _HDSERIESFREEZEJOURNALENTRY_H

@class NSDictionary, NSUUID;


#import "HDJournalEntry.h"

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) Class seriesClass; // ivar: _seriesClass
@property (readonly, copy, nonatomic) NSUUID *seriesUUID; // ivar: _seriesUUID


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeriesUUID:(id)arg0 metadata:(id)arg1 class:(Class)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif