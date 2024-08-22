// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERACCESSCONTROL_H
#define MTRCLUSTERACCESSCONTROL_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterAccessControl : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeACLWithParams:(id)arg0 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAccessControlEntriesPerFabricWithParams:(id)arg0 ;
-(id)readAttributeAclWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeExtensionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeSubjectsPerAccessControlEntryWithParams:(id)arg0 ;
-(id)readAttributeTargetsPerAccessControlEntryWithParams:(id)arg0 ;
-(void)writeAttributeACLWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACLWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeAclWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeAclWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeExtensionWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeExtensionWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif