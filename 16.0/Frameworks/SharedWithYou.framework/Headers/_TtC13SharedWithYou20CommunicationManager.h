// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SHAREDWITHYOU20COMMUNICATIONMANAGER_H
#define _TTC13SHAREDWITHYOU20COMMUNICATIONMANAGER_H

@protocol SLDServiceProxyDelegate;

#import <Foundation/Foundation.h>


@interface _TtC13SharedWithYou20CommunicationManager : NSObject <SLDServiceProxyDelegate>

 {
    ? $__lazy_storage_$_facetimeServiceProxy;
    ? attributionIdentifier;
    ? videoEnabled;
    ? presentingViewController;
}




-(id)init;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif