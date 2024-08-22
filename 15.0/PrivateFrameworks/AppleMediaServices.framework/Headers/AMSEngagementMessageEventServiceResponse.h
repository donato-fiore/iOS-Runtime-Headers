// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTMESSAGEEVENTSERVICERESPONSE_H
#define AMSENGAGEMENTMESSAGEEVENTSERVICERESPONSE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AMSDialogRequest.h"
#import "AMSEngagementRequest.h"

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (retain, nonatomic) AMSEngagementRequest *engagementRequest; // ivar: _engagementRequest
@property (retain, nonatomic) NSDictionary *placementRequests; // ivar: _placementRequests
@property (retain, nonatomic) NSDictionary *placements; // ivar: _placements
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)_makeEngagementRequestWithDictionary:(id)arg0 ;
-(id)_placementRequestsWithDictionary:(id)arg0 ;
-(id)_placementWithDictionary:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 ;


@end


#endif