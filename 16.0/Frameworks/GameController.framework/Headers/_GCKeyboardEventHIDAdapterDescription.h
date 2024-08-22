// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCKEYBOARDEVENTHIDADAPTERDESCRIPTION_H
#define _GCKEYBOARDEVENTHIDADAPTERDESCRIPTION_H

@class NSString;
@protocol _GCKeyboardEventSourceDescription, _GCHIDEventSourceDescription;

#import <Foundation/Foundation.h>

#import "_GCCControllerHIDServiceInfoDescription.h"
#import "_GCKeyboardEventHIDAdapter.h"

@interface _GCKeyboardEventHIDAdapterDescription : NSObject <_GCKeyboardEventSourceDescription>

 {
    id<_GCHIDEventSourceDescription> *_sourceDescription;
    _GCCControllerHIDServiceInfoDescription *_serviceDescription;
    _GCKeyboardEventHIDAdapter *_materializedObject;
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