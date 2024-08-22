// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUTCHECKPOINTINSTANT_H
#define CUTCHECKPOINTINSTANT_H

@class NSDate;


#import "CUTCheckpointSignpost.h"

@interface CUTCheckpointInstant : CUTCheckpointSignpost

@property (retain, nonatomic) NSDate *date; // ivar: _date


-(id)_reportEndDate;
-(id)_reportStartDate;
-(id)description;
-(id)initWithDate:(id)arg0 name:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)initWithName:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(void)_touchDate;
-(void)mergeWithCheckpoint:(id)arg0 ;


@end


#endif