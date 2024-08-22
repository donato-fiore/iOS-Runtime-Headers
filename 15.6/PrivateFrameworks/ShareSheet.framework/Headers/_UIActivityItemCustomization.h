// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIVITYITEMCUSTOMIZATION_H
#define _UIACTIVITYITEMCUSTOMIZATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIActivityItemCustomization : NSObject

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)actionCustomizationWithTitle:(id)arg0 identifier:(id)arg1 footerText:(id)arg2 handler:(id)arg3 ;
+(id)pickerCustomizationWithIdentifier:(id)arg0 options:(id)arg1 selectedOptionIndex:(NSInteger)arg2 footerText:(id)arg3 valueChangedHandler:(id)arg4 ;
+(id)switchCustomizationWithTitle:(id)arg0 identifier:(id)arg1 footerText:(id)arg2 value:(BOOL)arg3 valueChangedHandler:(id)arg4 ;
-(id)_initWithTitle:(id)arg0 identifier:(id)arg1 footerText:(id)arg2 ;


@end


#endif