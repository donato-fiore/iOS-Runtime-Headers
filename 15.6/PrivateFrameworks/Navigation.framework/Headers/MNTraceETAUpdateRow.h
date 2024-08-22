// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRACEETAUPDATEROW_H
#define MNTRACEETAUPDATEROW_H

@class NSString, NSError, GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse;
@protocol MNTracePlayerTimelineStreamObjectType;

#import <Foundation/Foundation.h>


@interface MNTraceETAUpdateRow : NSObject <MNTracePlayerTimelineStreamObjectType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat position;
@property (retain, nonatomic) GEOETATrafficUpdateRequest *request; // ivar: _request
@property (nonatomic) CGFloat requestTimestamp; // ivar: _requestTimestamp
@property (retain, nonatomic) GEOETATrafficUpdateResponse *response; // ivar: _response
@property (nonatomic) CGFloat responseTimestamp; // ivar: _responseTimestamp
@property (readonly) Class superclass;




@end


#endif