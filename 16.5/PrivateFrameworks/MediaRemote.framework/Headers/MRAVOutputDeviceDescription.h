// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVOUTPUTDEVICEDESCRIPTION_H
#define MRAVOUTPUTDEVICEDESCRIPTION_H

@class NSString, NSArray;
@protocol MRAVOutputDeviceDescriptionImpl;

#import <Foundation/Foundation.h>

#import "_MRAVOutputDeviceDescriptorProtobuf.h"

@interface MRAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic, getter=isClusterLeader) BOOL clusterLeader;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) NSString *composedTypeDescription;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) unsigned int deviceType;
@property (retain, nonatomic) NSObject<MRAVOutputDeviceDescriptionImpl> *impl; // ivar: _impl
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSArray *subComponents; // ivar: _subComponents
@property (readonly, nonatomic) BOOL supportsEngageOnClusterActivation;
@property (readonly, nonatomic) NSString *uid;


-(BOOL)containsUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAVDescription:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithDeviceType:(unsigned int)arg0 deviceSubtype:(unsigned int)arg1 uid:(id)arg2 ;
-(id)initWithDeviceType:(unsigned int)arg0 deviceSubtype:(unsigned int)arg1 uid:(id)arg2 name:(id)arg3 ;
-(id)initWithDeviceType:(unsigned int)arg0 deviceSubtype:(unsigned int)arg1 uid:(id)arg2 name:(id)arg3 modelID:(id)arg4 ;


@end


#endif