// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCHIDEMYEMAILSIGNUPCONFIG_H
#define FCHIDEMYEMAILSIGNUPCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FCContentColorPair.h"
#import "FCConfigHyperlinkText.h"

@interface FCHideMyEmailSignupConfig : NSObject

@property (readonly, nonatomic) FCContentColorPair *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSString *ctaButtonText; // ivar: _ctaButtonText
@property (readonly, nonatomic) NSString *headline; // ivar: _headline
@property (readonly, nonatomic) CGFloat headlineLineSpacing; // ivar: _headlineLineSpacing
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) FCConfigHyperlinkText *policyText; // ivar: _policyText
@property (readonly, nonatomic) FCContentColorPair *primaryColor; // ivar: _primaryColor
@property (readonly, nonatomic) FCContentColorPair *secondaryColor; // ivar: _secondaryColor
@property (readonly, nonatomic) NSString *subheadline; // ivar: _subheadline
@property (readonly, nonatomic) FCContentColorPair *tertiaryColor; // ivar: _tertiaryColor
@property (readonly, nonatomic) BOOL useChannelFont; // ivar: _useChannelFont


+(id)defaultConfig;
-(id)initDefault;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)pairFromDictionary:(id)arg0 ;


@end


#endif