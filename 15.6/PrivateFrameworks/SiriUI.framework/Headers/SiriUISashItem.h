// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUISASHITEM_H
#define SIRIUISASHITEM_H

@class NSString, UIColor, NSArray, UIImage;

#import <Foundation/Foundation.h>


@interface SiriUISashItem : NSObject

@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) BOOL canPunchout; // ivar: _canPunchout
@property (copy, nonatomic) NSArray *commands; // ivar: _commands
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic, setter=_setDefault:) BOOL isDefault; // ivar: _isDefault
@property (nonatomic) BOOL requestsExtraPadding; // ivar: _requestsExtraPadding
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_languageCode;
+(id)defaultSashItem;
+(void)_setLanguageCode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithApplicationBundleIdentifier:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 ;


@end


#endif