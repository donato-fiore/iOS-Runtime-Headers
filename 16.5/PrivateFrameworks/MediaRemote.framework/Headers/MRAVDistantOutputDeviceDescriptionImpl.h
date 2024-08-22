// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVDISTANTOUTPUTDEVICEDESCRIPTIONIMPL_H
#define MRAVDISTANTOUTPUTDEVICEDESCRIPTIONIMPL_H

@class NSString, NSArray;
@protocol MRAVOutputDeviceDescriptionImpl;

#import <Foundation/Foundation.h>

#import "_MRAVOutputDeviceDescriptorProtobuf.h"

@interface MRAVDistantOutputDeviceDescriptionImpl : NSObject <MRAVOutputDeviceDescriptionImpl>



@property (readonly, nonatomic, getter=isClusterLeader) BOOL clusterLeader;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) NSArray *subComponents;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEngageOnClusterActivation;
@property (readonly, nonatomic) NSString *uid;


-(id)initWithDescriptor:(id)arg0 ;


@end


#endif