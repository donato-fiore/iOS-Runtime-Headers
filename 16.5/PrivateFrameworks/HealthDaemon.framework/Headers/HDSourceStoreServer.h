// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSOURCESTORESERVER_H
#define HDSOURCESTORESERVER_H

@class NSString;
@protocol HKSourceStoreServer;


#import "HDStandardTaskServer.h"

@interface HDSourceStoreServer : HDStandardTaskServer <HKSourceStoreServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_deleteSourceWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchAllSourcesWithCompletion:(id)arg0 ;
-(void)remote_fetchHasSampleWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchOrderedSourcesForObjectType:(id)arg0 completion:(id)arg1 ;
-(void)remote_updateOrderedSources:(id)arg0 forObjectType:(id)arg1 completion:(id)arg2 ;


@end


#endif