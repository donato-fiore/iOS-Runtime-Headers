// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYITEMCUSTOMIZATIONSWITCH_H
#define _UIACTIVITYITEMCUSTOMIZATIONSWITCH_H

@class NSString;
@protocol _UIActivityItemCustomizationSwitch;


#import "UIActivityItemCustomization.h"

@interface _UIActivityItemCustomizationSwitch : UIActivityItemCustomization <_UIActivityItemCustomizationSwitch>

 {
    BOOL _value;
}


@property (copy, nonatomic, setter=_setHandler:) id *_handler; // ivar: __handler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL value;


-(id)initWithTitle:(id)arg0 identifier:(id)arg1 value:(BOOL)arg2 footerText:(id)arg3 ;


@end


#endif