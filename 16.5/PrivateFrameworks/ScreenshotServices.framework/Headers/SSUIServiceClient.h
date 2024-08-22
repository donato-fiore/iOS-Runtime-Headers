// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUISERVICECLIENT_H
#define SSUISERVICECLIENT_H

@class FBSServiceFacilityClient;

#import <Foundation/Foundation.h>


@interface SSUIServiceClient : NSObject {
    FBSServiceFacilityClient *_facilityClient;
}




-(id)init;
-(void)sendRequest:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif