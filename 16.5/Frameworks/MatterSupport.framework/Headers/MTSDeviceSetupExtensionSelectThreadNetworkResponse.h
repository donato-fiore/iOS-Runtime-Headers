// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONSELECTTHREADNETWORKRESPONSE_H
#define MTSDEVICESETUPEXTENSIONSELECTTHREADNETWORKRESPONSE_H



#import "MTSDeviceSetupExtensionMessage.h"
#import "MTSThreadNetworkAssociation.h"

@interface MTSDeviceSetupExtensionSelectThreadNetworkResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSThreadNetworkAssociation *threadNetworkAssociation; // ivar: _threadNetworkAssociation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThreadNetworkAssociation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif