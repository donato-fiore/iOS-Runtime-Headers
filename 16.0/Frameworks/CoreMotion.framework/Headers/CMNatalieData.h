// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMNATALIEDATA_H
#define CMNATALIEDATA_H

@class NSUUID, NSNumber, NSDate;


#import "CMLogItem.h"

@interface CMNatalieData : CMLogItem {
    NSInteger fRecordId;
    CGFloat fStartDate;
    NSInteger fActivityType;
    CGFloat fMets;
    CGFloat fNatalies;
    CGFloat fBasalNatalies;
    NSUUID *fSourceId;
}


@property (readonly, nonatomic) NSInteger activityType;
@property (readonly, nonatomic) NSNumber *basalNatalies;
@property (readonly, nonatomic) NSNumber *mets;
@property (readonly, nonatomic) NSNumber *natalies;
@property (readonly, nonatomic) NSInteger recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
+(id)maxNatalieEntries;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(CGFloat)arg0 recordId:(NSInteger)arg1 activityType:(NSInteger)arg2 mets:(CGFloat)arg3 natalies:(CGFloat)arg4 basalNatalies:(CGFloat)arg5 sourceId:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif