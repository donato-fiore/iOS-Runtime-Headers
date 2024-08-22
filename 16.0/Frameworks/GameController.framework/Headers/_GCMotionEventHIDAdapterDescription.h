// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCMOTIONEVENTHIDADAPTERDESCRIPTION_H
#define _GCMOTIONEVENTHIDADAPTERDESCRIPTION_H

@class NSString;
@protocol _GCMotionEventSourceDescription, _GCHIDEventSourceDescription;

#import <Foundation/Foundation.h>

#import "_GCCControllerHIDServiceInfoDescription.h"
#import "_GCMotionEventHIDAdapter.h"

@interface _GCMotionEventHIDAdapterDescription : NSObject <_GCMotionEventSourceDescription>

 {
    id<_GCHIDEventSourceDescription> *_sourceDescription;
    _GCCControllerHIDServiceInfoDescription *_serviceDescription;
    _GCMotionEventHIDAdapter *_materializedObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 service:(id)arg1 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif