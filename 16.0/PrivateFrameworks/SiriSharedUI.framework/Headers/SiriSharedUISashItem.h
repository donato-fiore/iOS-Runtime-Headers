// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUISASHITEM_H
#define SIRISHAREDUISASHITEM_H

@class NSString, UIColor, NSArray, UIImage;
@protocol SiriSharedUISashItemDelegate;

#import <Foundation/Foundation.h>


@interface SiriSharedUISashItem : NSObject

@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) BOOL canPunchout; // ivar: _canPunchout
@property (copy, nonatomic) NSArray *commands; // ivar: _commands
@property (weak, nonatomic) NSObject<SiriSharedUISashItemDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL requestsExtraPadding; // ivar: _requestsExtraPadding
@property (readonly, nonatomic, getter=isSiriImage) BOOL siriImage; // ivar: _siriImage
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)languageCode;
+(void)setLanguageCode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithApplicationBundleIdentifier:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 ;
-(void)_configureIconForAppProxy:(id)arg0 ;


@end


#endif