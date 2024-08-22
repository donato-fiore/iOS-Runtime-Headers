// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSYMBOLICONCOLORCONFIGURATION_H
#define HUSYMBOLICONCOLORCONFIGURATION_H

@class UIColor, NSString;
@protocol HUSymbolIconColorConfiguration;

#import <Foundation/Foundation.h>


@interface HUSymbolIconColorConfiguration : NSObject <HUSymbolIconColorConfiguration>



@property (readonly, nonatomic) UIColor *activeIconBackgroundColor;
@property (readonly, nonatomic) UIColor *activeIconColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *disabledIconBackgroundColor;
@property (readonly, nonatomic) UIColor *disabledIconColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *iconBackgroundColorInDescriptiveView;
@property (readonly, nonatomic) UIColor *iconColorInDescriptiveView;
@property (readonly, nonatomic) UIColor *inactiveIconBackgroundColor;
@property (readonly, nonatomic) UIColor *inactiveIconColor;
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (readonly) Class superclass;


+(id)iconColorConfigurationForItem:(id)arg0 ;
+(id)iconColorConfigurationForSymbolIconAccessoryType:(id)arg0 ;
+(id)iconColorConfigurationForSymbolIconIdentifier:(id)arg0 ;
-(id)initWithPrimaryColor:(id)arg0 ;


@end


#endif