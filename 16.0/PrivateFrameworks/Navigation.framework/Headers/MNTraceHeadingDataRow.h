// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACEHEADINGDATAROW_H
#define MNTRACEHEADINGDATAROW_H

@class NSString;
@protocol MNTracePlayerTimelineStreamObjectType;

#import <Foundation/Foundation.h>


@interface MNTraceHeadingDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headingAccuracy; // ivar: _headingAccuracy
@property (nonatomic) CGFloat magneticHeading; // ivar: _magneticHeading
@property (readonly, nonatomic) CGFloat position;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat trueHeading; // ivar: _trueHeading




@end


#endif