// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACTIVITYITEMCUSTOMIZATION_H
#define UIACTIVITYITEMCUSTOMIZATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIActivityItemCustomization : NSObject

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)actionCustomizationWithTitle:(id)arg0 identifier:(id)arg1 handler:(id)arg2 ;
+(id)pickerCustomizationWithTitle:(id)arg0 identifier:(id)arg1 options:(id)arg2 selectedOptionIndex:(NSInteger)arg3 valueChangedHandler:(id)arg4 ;
+(id)switchCustomizationWithTitle:(id)arg0 identifier:(id)arg1 value:(BOOL)arg2 valueChangedHandler:(id)arg3 ;
-(id)_initWithTitle:(id)arg0 identifier:(id)arg1 ;


@end


#endif