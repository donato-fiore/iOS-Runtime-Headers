// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOCATIONACCESSRESOURCE_H
#define WFLOCATIONACCESSRESOURCE_H

@class NSString, CLLocationManager;
@protocol CLLocationManagerDelegate;


#import "WFAccessResource.h"
#import "WFWorkflow.h"

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate>

 {
    WFWorkflow *_workflow;
}


@property (nonatomic) int authorizationStatus; // ivar: _authorizationStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (copy, nonatomic) id *makeAvailableCompletionHandler; // ivar: _makeAvailableCompletionHandler
@property (readonly) Class superclass;


+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)icon;
-(id)name;
-(id)protectedResourceDescription;
-(id)workflow;
-(void)finishMakingAvailableWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)setWorkflow:(id)arg0 ;


@end


#endif