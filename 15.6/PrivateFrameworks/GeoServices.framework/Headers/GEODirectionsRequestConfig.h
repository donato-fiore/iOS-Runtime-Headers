// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODIRECTIONSREQUESTCONFIG_H
#define GEODIRECTIONSREQUESTCONFIG_H

@class NSNumber, NSString;
@protocol GEOServiceRequestConfiguring;


#import "GEOServiceRequestDefaultConfig.h"
#import "GEODirectionsRequest.h"

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring>

 {
    NSNumber *_requestPriority;
    GEODirectionsRequest *_request;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)usesBackgroundURL;
-(NSUInteger)multipathServiceType;
-(NSUInteger)urlType;
-(id)additionalHTTPHeaders;
-(id)additionalStatesForNetworkEvent;
-(id)additionalURLQueryItems;
-(id)initWithRequest:(id)arg0 requestPriority:(id)arg1 ;
-(id)serviceTypeNumber;
-(struct ? )dataRequestKindForRequest:(id)arg0 traits:(id)arg1 ;


@end


#endif