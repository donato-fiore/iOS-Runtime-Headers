// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERMODESELECT_H
#define MTRCLUSTERMODESELECT_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterModeSelect : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeCurrentModeWithParams:(id)arg0 ;
-(id)readAttributeDescriptionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeOnModeWithParams:(id)arg0 ;
-(id)readAttributeStandardNamespaceWithParams:(id)arg0 ;
-(id)readAttributeStartUpModeWithParams:(id)arg0 ;
-(id)readAttributeSupportedModesWithParams:(id)arg0 ;
-(void)changeToModeWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)changeToModeWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeOnModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOnModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeStartUpModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeStartUpModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif