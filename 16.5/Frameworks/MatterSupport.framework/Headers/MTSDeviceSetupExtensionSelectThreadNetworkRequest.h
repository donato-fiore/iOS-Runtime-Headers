// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONSELECTTHREADNETWORKREQUEST_H
#define MTSDEVICESETUPEXTENSIONSELECTTHREADNETWORKREQUEST_H

@class NSArray;


#import "MTSDeviceSetupExtensionMessage.h"

@interface MTSDeviceSetupExtensionSelectThreadNetworkRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *threadScanResults; // ivar: _threadScanResults


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThreadScanResults:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif