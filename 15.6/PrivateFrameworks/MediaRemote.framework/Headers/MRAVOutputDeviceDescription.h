// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVOUTPUTDEVICEDESCRIPTION_H
#define MRAVOUTPUTDEVICEDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_MRAVOutputDeviceDescriptorProtobuf.h"

@interface MRAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic) NSString *composedTypeDescription;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) unsigned int deviceSubtype; // ivar: _deviceSubtype
@property (readonly, nonatomic) unsigned int deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *uid; // ivar: _uid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDeviceType:(unsigned int)arg0 deviceSubtype:(unsigned int)arg1 uid:(id)arg2 ;
-(id)initWithDeviceType:(unsigned int)arg0 deviceSubtype:(unsigned int)arg1 uid:(id)arg2 name:(id)arg3 ;
-(id)initWithDeviceType:(unsigned int)arg0 deviceSubtype:(unsigned int)arg1 uid:(id)arg2 name:(id)arg3 modelID:(id)arg4 ;


@end


#endif