// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMACCESSCONTROLPOLICY_H
#define BMACCESSCONTROLPOLICY_H


#import <Foundation/Foundation.h>

#import "BMProcess.h"

@interface BMAccessControlPolicy : NSObject {
    BMProcess *_process;
}


@property (readonly) BOOL allowsAccessToFlexibleStorage;
@property (readonly) BOOL allowsConnectionToAccessService;
@property (readonly) BOOL allowsConnectionToComputePublisherService;
@property (readonly) BOOL allowsConnectionToComputeSourceService;
@property (readonly) BOOL allowsProxyingBiomeEndpoint;


+(id)policyForProcess:(id)arg0 ;
-(BOOL)allowsAccessToClientCompute:(id)arg0 ;
-(BOOL)allowsAccessToContextSyncStreams:(id)arg0 ;
-(BOOL)allowsAccessToStream:(id)arg0 withMode:(NSUInteger)arg1 ;
-(BOOL)allowsComputePublisherAccessToStreams:(id)arg0 ;
-(BOOL)allowsComputeSourceAccessToStreams:(id)arg0 ;
-(NSUInteger)checkAccessToStream:(id)arg0 withMode:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithProcess:(id)arg0 ;
-(void)_warnAboutInternalEntitlement:(id)arg0 streamIdentifier:(id)arg1 ;


@end


#endif