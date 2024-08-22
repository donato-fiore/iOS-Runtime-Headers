// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTATTRIBUTEDEFAULTCATEGORIES_H
#define _UITEXTATTRIBUTEDEFAULTCATEGORIES_H

@class NSString;
@protocol _UITextAttributeDefaultCategories, _UITextAttributeDefaultFontSizes, _UITextAttributeDefaults;

#import <Foundation/Foundation.h>


@interface _UITextAttributeDefaultCategories : NSObject <_UITextAttributeDefaultCategories, _UITextAttributeDefaultFontSizes>



@property (readonly, nonatomic) CGFloat _buttonFontSize; // ivar: _buttonFontSize
@property (readonly, nonatomic) NSObject<_UITextAttributeDefaults> *_generic; // ivar: _generic
@property (readonly, nonatomic) NSObject<_UITextAttributeDefaults> *_label; // ivar: _label
@property (readonly, nonatomic) CGFloat _labelFontSize; // ivar: _labelFontSize
@property (readonly, nonatomic) CGFloat _smallSystemFontSize; // ivar: _smallSystemFontSize
@property (readonly, nonatomic) CGFloat _systemFontSize; // ivar: _systemFontSize
@property (readonly, nonatomic) NSObject<_UITextAttributeDefaults> *_textField; // ivar: _textField
@property (readonly, nonatomic) NSObject<_UITextAttributeDefaults> *_textView; // ivar: _textView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_genericDefaults:(NSInteger)arg0 ;
-(id)_labelDefaults:(NSInteger)arg0 ;
-(id)_textFieldDefaults:(NSInteger)arg0 ;
-(id)initWithUserInterfaceIdiom:(NSInteger)arg0 ;


@end


#endif