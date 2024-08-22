// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCADAPTIVETRIGGERSXPCPROXYCLIENTENDPOINTDESCRIPTION_H
#define GCADAPTIVETRIGGERSXPCPROXYCLIENTENDPOINTDESCRIPTION_H

@class NSArray, NSString;
@protocol _GCControllerComponentDescription, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCAdaptiveTriggersXPCProxyClientEndpoint.h"

@interface GCAdaptiveTriggersXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>

 {
    NSArray *_initialStatuses;
    GCAdaptiveTriggersXPCProxyClientEndpoint *_materializedObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 initialStatuses:(id)arg1 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif