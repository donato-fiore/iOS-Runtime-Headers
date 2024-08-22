// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSKEYAUTOFILLFROMNEARBYDEVICEOPTIONS_H
#define WBSPASSKEYAUTOFILLFROMNEARBYDEVICEOPTIONS_H

@class NSXPCListenerEndpoint, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSPasskeyAutoFillFromNearbyDeviceOptions : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSXPCListenerEndpoint *agentEndpoint; // ivar: _agentEndpoint
@property (readonly, copy, nonatomic) NSUUID *operationUUID; // ivar: _operationUUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif