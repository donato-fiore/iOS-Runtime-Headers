// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKCOLLECTIONCLIENTPROXY_H
#define _NTKCOLLECTIONCLIENTPROXY_H

@class NSString;
@protocol NTKCollectionClient;

#import <Foundation/Foundation.h>


@interface _NTKCollectionClientProxy : NSObject <NTKCollectionClient>

 {
    id<NTKCollectionClient> *_proxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWeakProxy:(id)arg0 ;
-(void)addFaceInstanceDescriptor:(id)arg0 forUUID:(id)arg1 seqId:(id)arg2 ;
-(void)flushCompleteForIdentifier:(id)arg0 ;
-(void)loadFullCollectionWithOrderedUUIDs:(id)arg0 selectedUUID:(id)arg1 facesDescriptorsByUUID:(id)arg2 seqId:(id)arg3 completion:(id)arg4 ;
-(void)removeFaceForUUID:(id)arg0 seqId:(id)arg1 completion:(id)arg2 ;
-(void)resetClientCollectionWithCompletion:(id)arg0 ;
-(void)updateFaceForUUID:(id)arg0 withConfigurationJSONRepresentation:(id)arg1 seqId:(id)arg2 ;
-(void)updateFaceForUUID:(id)arg0 withResourceDirectory:(id)arg1 seqId:(id)arg2 completion:(id)arg3 ;
-(void)updateOrderedFaceUUIDs:(id)arg0 seqId:(id)arg1 ;
-(void)updateSelectedFaceUUID:(id)arg0 seqId:(id)arg1 ;
-(void)upgradeFaceInstanceDescriptor:(id)arg0 forUUID:(id)arg1 seqID:(id)arg2 ;


@end


#endif