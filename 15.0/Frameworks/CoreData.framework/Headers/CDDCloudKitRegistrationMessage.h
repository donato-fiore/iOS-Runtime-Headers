// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDCLOUDKITREGISTRATIONMESSAGE_H
#define CDDCLOUDKITREGISTRATIONMESSAGE_H

@class NSString, NSFileHandle;


#import "CDDCloudKitMessage.h"

@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage {
    NSString *_bundleIdentifier;
    NSFileHandle *_storeFileHandle;
    NSString *_storePath;
    NSString *_storeFileProtectionClass;
    NSString *_storeType;
    NSString *_storeConfigurationName;
    NSString *_containerIdentifier;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif