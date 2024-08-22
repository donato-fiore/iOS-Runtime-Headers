// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACERECORDINGDATA_H
#define MNTRACERECORDINGDATA_H

@class GEODirectionsRequest, NSError, GEODirectionsResponse, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNLocation.h"

@interface MNTraceRecordingData : NSObject <NSSecureCoding>



@property (retain, nonatomic) GEODirectionsRequest *initialDirectionsRequest; // ivar: _initialDirectionsRequest
@property (retain, nonatomic) NSError *initialDirectionsRequestError; // ivar: _initialDirectionsRequestError
@property (nonatomic) CGFloat initialDirectionsRequestTimestamp; // ivar: _initialDirectionsRequestTimestamp
@property (retain, nonatomic) GEODirectionsResponse *initialDirectionsResponse; // ivar: _initialDirectionsResponse
@property (nonatomic) CGFloat initialDirectionsResponseTimestamp; // ivar: _initialDirectionsResponseTimestamp
@property (retain, nonatomic) MNLocation *initialUserLocation; // ivar: _initialUserLocation
@property (retain, nonatomic) NSArray *waypoints; // ivar: _waypoints


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif