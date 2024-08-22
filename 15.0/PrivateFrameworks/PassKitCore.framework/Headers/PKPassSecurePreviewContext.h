// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSSECUREPREVIEWCONTEXT_H
#define PKPASSSECUREPREVIEWCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPassSecurePreviewContext : NSObject

@property (copy, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) *CGImage backgroundImage; // ivar: _backgroundImage
@property (readonly, nonatomic) *CGImage image; // ivar: _image
@property (copy, nonatomic) NSString *primaryColor; // ivar: _primaryColor
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryColor; // ivar: _secondaryColor
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (copy, nonatomic) NSString *tertiaryColor; // ivar: _tertiaryColor
@property (copy, nonatomic) NSString *tertiaryText; // ivar: _tertiaryText


+(id)createMessagesPreviewForPassFileURL:(id)arg0 withOutputDirectory:(id)arg1 ;
+(id)createMessagesPreviewForPassesFileURL:(id)arg0 withOutputDirectory:(id)arg1 ;
-(id)_initWithBackgroundColor:(id)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 tertiaryColor:(id)arg3 ;
-(id)init;
-(void)dealloc;


@end


#endif