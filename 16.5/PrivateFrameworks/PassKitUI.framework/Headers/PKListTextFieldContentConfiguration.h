// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKLISTTEXTFIELDCONTENTCONFIGURATION_H
#define PKLISTTEXTFIELDCONTENTCONFIGURATION_H

@class UIListContentConfiguration, NSString, NSError, UIColor, UIListContentTextProperties;
@protocol UIContentConfiguration;

#import <Foundation/Foundation.h>


@interface PKListTextFieldContentConfiguration : NSObject <UIContentConfiguration>

 {
    UIListContentConfiguration *_backingConfig;
}


@property (nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (nonatomic) BOOL clearsOnBeginEditing; // ivar: _clearsOnBeginEditing
@property (nonatomic) BOOL clearsOnInsertion; // ivar: _clearsOnInsertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) UIColor *errorColor; // ivar: _errorColor
@property (nonatomic) BOOL focusTextField; // ivar: _focusTextField
@property (copy, nonatomic) id *hasErrorHandler; // ivar: _hasErrorHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (copy, nonatomic) NSString *placeholderText; // ivar: _placeholderText
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIListContentTextProperties *textProperties;
@property (nonatomic) CGFloat textToSecondaryTextHorizontalPadding;
@property (nonatomic) CGFloat textToSecondaryTextVerticalPadding;


+(id)cellConfiguration;
+(id)valueCellConfiguration;
-(BOOL)_isEqualToListTextFieldContentConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBackingConfig:(id)arg0 ;
-(id)makeContentView;
-(id)updatedConfigurationForState:(id)arg0 ;


@end


#endif