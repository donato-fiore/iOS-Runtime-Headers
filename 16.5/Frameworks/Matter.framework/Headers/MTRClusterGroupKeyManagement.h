// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERGROUPKEYMANAGEMENT_H
#define MTRCLUSTERGROUPKEYMANAGEMENT_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterGroupKeyManagement : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeGroupKeyMapWithParams:(id)arg0 ;
-(id)readAttributeGroupTableWithParams:(id)arg0 ;
-(id)readAttributeMaxGroupKeysPerFabricWithParams:(id)arg0 ;
-(id)readAttributeMaxGroupsPerFabricWithParams:(id)arg0 ;
-(void)keySetReadAllIndicesWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)keySetReadAllIndicesWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)keySetReadWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)keySetReadWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)keySetRemoveWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)keySetRemoveWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)keySetWriteWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)keySetWriteWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeGroupKeyMapWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeGroupKeyMapWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif