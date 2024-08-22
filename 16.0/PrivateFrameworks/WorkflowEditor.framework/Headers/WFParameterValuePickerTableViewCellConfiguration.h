// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPARAMETERVALUEPICKERTABLEVIEWCELLCONFIGURATION_H
#define WFPARAMETERVALUEPICKERTABLEVIEWCELLCONFIGURATION_H

@class NSString, WFIcon, WFImage, UIViewController, UIColor, UIFont;
@protocol UIContentConfiguration, WFParameterValuePickerTableViewCellDelegate;

#import <Foundation/Foundation.h>


@interface WFParameterValuePickerTableViewCellConfiguration : NSObject <UIContentConfiguration>



@property (nonatomic, getter=isContainedInState) BOOL containedInState; // ivar: _containedInState
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFParameterValuePickerTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesSeparatorIconInset; // ivar: _disablesSeparatorIconInset
@property (nonatomic) BOOL forceImageScaling; // ivar: _forceImageScaling
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFIcon *icon; // ivar: _icon
@property (retain, nonatomic) WFImage *image; // ivar: _image
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (copy, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (retain, nonatomic) UIFont *secondaryTextFont; // ivar: _secondaryTextFont
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) UIFont *textFont; // ivar: _textFont
@property (nonatomic) BOOL usesInsetGroupedTableStyle; // ivar: _usesInsetGroupedTableStyle
@property (nonatomic) BOOL usesToggleForSelection; // ivar: _usesToggleForSelection


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makeContentView;
-(id)updatedConfigurationForState:(id)arg0 ;


@end


#endif