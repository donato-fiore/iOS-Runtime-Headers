// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCSETTINGSXPCPROXYCLIENTENDPOINTDESCRIPTION_H
#define GCSETTINGSXPCPROXYCLIENTENDPOINTDESCRIPTION_H

@class NSString;
@protocol _GCControllerComponentDescription, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCControllerSettings.h"
#import "GCSettingsXPCProxyClientEndpoint.h"

@interface GCSettingsXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>

 {
    GCControllerSettings *_initialSettingsForBundleID;
    GCControllerSettings *_initialSettingsDefault;
    GCSettingsXPCProxyClientEndpoint *_materializedObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 initialValueForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif