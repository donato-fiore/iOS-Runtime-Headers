// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCGAMEPADEVENTKEYBOARDEVENTADAPTERDESCRIPTION_H
#define _GCGAMEPADEVENTKEYBOARDEVENTADAPTERDESCRIPTION_H

@class NSString;
@protocol _GCGamepadEventSourceDescription, _GCKeyboardEventSourceDescription;

#import <Foundation/Foundation.h>

#import "_GCGamepadEventKeyboardEventAdapterConfig.h"
#import "_GCGamepadEventKeyboardEventAdapter.h"

@interface _GCGamepadEventKeyboardEventAdapterDescription : NSObject <_GCGamepadEventSourceDescription>

 {
    _GCGamepadEventKeyboardEventAdapterConfig *_config;
    id<_GCKeyboardEventSourceDescription> *_sourceDescription;
    _GCGamepadEventKeyboardEventAdapter *_materializedObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 source:(id)arg1 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif