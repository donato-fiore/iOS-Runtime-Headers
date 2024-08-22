// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSORIENTATIONOBSERVERCLIENT_H
#define FBSORIENTATIONOBSERVERCLIENT_H

@protocol FBSOrientationObserverClientDelegate;


#import "FBSServiceFacilityClient.h"

@interface FBSOrientationObserverClient : FBSServiceFacilityClient {
    id<FBSOrientationObserverClientDelegate> *_delegate;
    unsigned int _interest;
}




-(NSInteger)activeInterfaceOrientation;
-(id)initWithDelegate:(id)arg0 calloutQueue:(id)arg1 ;
-(void)_getActiveInterfaceOrientationSynchronously:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)activeInterfaceOrientationWithCompletion:(id)arg0 ;
-(void)configureConnectMessage:(id)arg0 ;
-(void)handleMessage:(id)arg0 withType:(NSInteger)arg1 ;
-(void)invalidate;
-(void)registerOrientationInterest:(unsigned int)arg0 ;


@end


#endif