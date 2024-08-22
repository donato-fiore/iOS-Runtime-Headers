// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKTIMELINEUPDATEENDDATEOPERATION_H
#define NTKTIMELINEUPDATEENDDATEOPERATION_H

@class NSDate;


#import "NTKTimelineDataOperation.h"

@interface NTKTimelineUpdateEndDateOperation : NTKTimelineDataOperation {
    NSDate *_endDate;
}


@property (copy, nonatomic) id *handler; // ivar: _handler


-(void)_cancel;
-(void)_getEndDate;
-(void)_invokeHandler;
-(void)_start;


@end


#endif