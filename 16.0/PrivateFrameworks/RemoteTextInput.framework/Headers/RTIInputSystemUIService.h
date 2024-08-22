// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTIINPUTSYSTEMUISERVICE_H
#define RTIINPUTSYSTEMUISERVICE_H

@class BSServiceConnectionListener, NSString;
@protocol BSServiceConnectionListenerDelegate;


#import "RTIInputSystemService.h"

@interface RTIInputSystemUIService : RTIInputSystemService <BSServiceConnectionListenerDelegate>

 {
    BSServiceConnectionListener *_bsConnectionListener;
    NSString *_domainName;
    NSString *_serviceName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RTIInputSystemService *rtiService;
@property (readonly) Class superclass;


+(id)sharedServiceWithDomainName:(id)arg0 serviceName:(id)arg1 ;
-(BOOL)_canResumeConnection;
-(id)initWithDomainName:(id)arg0 serviceName:(id)arg1 ;
-(id)listenerEndpoint;
-(void)_createListenerIfNecessary;
-(void)_destroyListenerIfNecessary;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif