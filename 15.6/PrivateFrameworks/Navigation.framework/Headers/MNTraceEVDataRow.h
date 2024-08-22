// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRACEEVDATAROW_H
#define MNTRACEEVDATAROW_H

@class NSString, VGVehicle;
@protocol MNTracePlayerTimelineStreamObjectType;

#import <Foundation/Foundation.h>


@interface MNTraceEVDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat position;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) VGVehicle *vehicle; // ivar: _vehicle




@end


#endif