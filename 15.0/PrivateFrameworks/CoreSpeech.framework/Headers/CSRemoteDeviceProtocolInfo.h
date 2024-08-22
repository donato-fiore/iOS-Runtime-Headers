// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSREMOTEDEVICEPROTOCOLINFO_H
#define CSREMOTEDEVICEPROTOCOLINFO_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSRemoteDeviceProtocolInfo : NSObject

@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSUInteger deviceCategory; // ivar: _deviceCategory
@property (readonly, nonatomic) NSString *deviceProductType; // ivar: _deviceProductType
@property (readonly, nonatomic) NSString *deviceProductVersion; // ivar: _deviceProductVersion
@property (readonly, nonatomic) NSUInteger protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


+(id)defaultProtocolInfo;
+(id)localDeviceProtocolInfo;
-(id)description;
-(id)initWithProtocolVersion:(NSUInteger)arg0 buildVersion:(id)arg1 deviceProductVersion:(id)arg2 deviceProductType:(id)arg3 deviceCategory:(NSUInteger)arg4 ;
-(id)initWithXPCObject:(id)arg0 ;


@end


#endif