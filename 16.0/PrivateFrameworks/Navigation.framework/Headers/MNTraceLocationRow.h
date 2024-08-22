// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACELOCATIONROW_H
#define MNTRACELOCATIONROW_H

@class NSString, NSError;
@protocol MNTracePlayerTimelineStreamObjectType;

#import <Foundation/Foundation.h>

#import "MNLocation.h"
#import "MNLocationMatchInfo.h"

@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType>



@property (nonatomic) ? correctedCoordinate; // ivar: _correctedCoordinate
@property (nonatomic) CGFloat correctedCourse; // ivar: _correctedCourse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MNLocation *location; // ivar: _location
@property (nonatomic) NSInteger locationEventType; // ivar: _locationEventType
@property (retain, nonatomic) MNLocationMatchInfo *matchInfo; // ivar: _matchInfo
@property (nonatomic) NSUInteger originalMatchType; // ivar: _originalMatchType
@property (readonly, nonatomic) CGFloat position;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp




@end


#endif