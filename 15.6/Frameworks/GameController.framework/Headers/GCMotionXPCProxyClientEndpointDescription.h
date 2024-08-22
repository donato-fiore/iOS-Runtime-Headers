// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCMOTIONXPCPROXYCLIENTENDPOINTDESCRIPTION_H
#define GCMOTIONXPCPROXYCLIENTENDPOINTDESCRIPTION_H

@class NSString;
@protocol _GCControllerComponentDescription, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCMotionXPCProxyClientEndpoint.h"

@interface GCMotionXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>

 {
    BOOL _initialSensorsActive;
    GCMotionXPCProxyClientEndpoint *_materializedObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 initialSensorsActive:(BOOL)arg1 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif