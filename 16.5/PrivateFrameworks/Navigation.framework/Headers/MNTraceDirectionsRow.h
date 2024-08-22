// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTRACEDIRECTIONSROW_H
#define MNTRACEDIRECTIONSROW_H

@class NSString, NSError, GEODirectionsRequest, GEODirectionsResponse, NSArray;
@protocol MNTracePlayerTimelineStreamObjectType;

#import <Foundation/Foundation.h>


@interface MNTraceDirectionsRow : NSObject <MNTracePlayerTimelineStreamObjectType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat position;
@property (retain, nonatomic) GEODirectionsRequest *request; // ivar: _request
@property (nonatomic) CGFloat requestTimestamp; // ivar: _requestTimestamp
@property (retain, nonatomic) GEODirectionsResponse *response; // ivar: _response
@property (nonatomic) CGFloat responseTimestamp; // ivar: _responseTimestamp
@property (nonatomic) NSUInteger selectedRouteIndex; // ivar: _selectedRouteIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *waypoints; // ivar: _waypoints




@end


#endif