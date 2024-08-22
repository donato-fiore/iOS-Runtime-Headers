// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRMODIFYOUTPUTCONTEXTREQUESTMESSAGE_H
#define MRMODIFYOUTPUTCONTEXTREQUESTMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *addingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *removingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *settingOutputDeviceUIDs;


-(NSUInteger)type;
-(id)description;
-(id)initWithAddingDeviceUIDs:(id)arg0 removingDeviceUIDs:(id)arg1 settingDeviceUIDs:(id)arg2 clusterAwareAddingOutputDeviceUIDs:(id)arg3 clusterAwareRemovingOutputDeviceUIDs:(id)arg4 clusterAwareSettingOutputDeviceUIDs:(id)arg5 ;
-(unsigned int)contextType;


@end


#endif