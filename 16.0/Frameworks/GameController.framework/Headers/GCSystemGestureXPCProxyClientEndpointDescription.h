// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSYSTEMGESTUREXPCPROXYCLIENTENDPOINTDESCRIPTION_H
#define GCSYSTEMGESTUREXPCPROXYCLIENTENDPOINTDESCRIPTION_H

@class NSString;
@protocol _GCControllerComponentDescription, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCSystemGesturesState.h"
#import "GCSystemGestureXPCProxyClientEndpoint.h"

@interface GCSystemGestureXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>

 {
    GCSystemGesturesState *_initialSystemGesture;
    GCSystemGestureXPCProxyClientEndpoint *_materializedObject;
    BOOL _isSystemGestureObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 initialSystemGesture:(id)arg1 isSystemGestureObserver:(BOOL)arg2 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif