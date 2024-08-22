// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIDSIDQUERYMANAGER_H
#define PKIDSIDQUERYMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKIDSIDQueryManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)checkDeviceSupportForDestinations:(id)arg0 service:(id)arg1 listenerID:(id)arg2 capability:(id)arg3 completion:(id)arg4 ;
-(void)checkIDSStatusForDestination:(id)arg0 service:(id)arg1 listenerID:(id)arg2 completion:(id)arg3 ;
-(void)reachableDestinationsForDestination:(id)arg0 service:(id)arg1 completion:(id)arg2 ;


@end


#endif