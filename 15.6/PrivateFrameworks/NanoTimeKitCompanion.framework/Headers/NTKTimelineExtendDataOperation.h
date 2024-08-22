// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKTIMELINEEXTENDDATAOPERATION_H
#define NTKTIMELINEEXTENDDATAOPERATION_H

@class NSDate;


#import "NTKTimelineDataOperation.h"

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {
    NSDate *_boundaryDate;
}


@property (copy, nonatomic) id *handler; // ivar: _handler


-(void)_cancel;
-(void)_extendRight;
-(void)_invokeHandlerWithEntries:(id)arg0 ;
-(void)_start;
-(void)setExtendsRightFromDate:(id)arg0 ;


@end


#endif