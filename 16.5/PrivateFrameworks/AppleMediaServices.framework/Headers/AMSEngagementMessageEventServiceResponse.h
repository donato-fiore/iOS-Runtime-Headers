// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTMESSAGEEVENTSERVICERESPONSE_H
#define AMSENGAGEMENTMESSAGEEVENTSERVICERESPONSE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AMSDialogRequest.h"
#import "AMSEngagementRequest.h"
#import "AMSEngagementMessageRequest.h"

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (retain, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (retain, nonatomic) AMSEngagementRequest *engagementRequest; // ivar: _engagementRequest
@property (retain, nonatomic) AMSEngagementMessageRequest *fullScreenMessageRequest; // ivar: _fullScreenMessageRequest
@property (retain, nonatomic) NSDictionary *placementRequests;
@property (retain, nonatomic) NSDictionary *placements;
@property (retain, nonatomic) NSDictionary *placementsMap; // ivar: _placementsMap
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)_placementRequestsWithDictionary:(id)arg0 ;
-(id)_placementsMapWithPayload:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 ;


@end


#endif