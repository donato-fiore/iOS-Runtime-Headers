// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTENTUNAVAILABLEBUTTONPROPERTIES_H
#define UICONTENTUNAVAILABLEBUTTONPROPERTIES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIButtonConfiguration.h"
#import "UIAction.h"
#import "UIMenu.h"

@interface UIContentUnavailableButtonProperties : NSObject <NSCopying, NSSecureCoding>

 {
    ? _buttonFlags;
    BOOL _showsMenuAsPrimaryAction;
    BOOL _enabled;
    UIButtonConfiguration *_configuration;
    UIAction *_primaryAction;
    UIMenu *_menu;
    UIButtonConfiguration *_defaultConfiguration;
}


@property (retain, nonatomic) UIButtonConfiguration *configuration;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) UIAction *primaryAction;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif