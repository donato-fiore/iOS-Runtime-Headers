// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCINTANDZONEJOBIDENTIFIER_H
#define BRCINTANDZONEJOBIDENTIFIER_H

@class NSString;
@protocol BRCJobIdentifying;

#import <Foundation/Foundation.h>

#import "BRCZoneRowID.h"

@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intID; // ivar: _intID
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCZoneRowID *zoneRowID; // ivar: _zoneRowID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIntAndZoneJobIdentifier:(id)arg0 ;
-(id)columns;
-(id)columnsValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIntID:(NSInteger)arg0 zoneRowID:(id)arg1 ;
-(id)jobsDescription;
-(id)matchingJobsWhereSQLClause;


@end


#endif