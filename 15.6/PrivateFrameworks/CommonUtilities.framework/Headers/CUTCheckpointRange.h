// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTCHECKPOINTRANGE_H
#define CUTCHECKPOINTRANGE_H

@class NSDate;


#import "CUTCheckpointSignpost.h"

@interface CUTCheckpointRange : CUTCheckpointSignpost

@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic, getter=isOrdered) BOOL ordered; // ivar: _ordered
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)_reportEndDate;
-(id)_reportStartDate;
-(id)description;
-(id)initWithName:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(void)_touchEndDate;
-(void)_touchStartDate;
-(void)mergeWithCheckpoint:(id)arg0 ;


@end


#endif