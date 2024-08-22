// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSSCREENSHOTPRESENTATIONATTRIBUTES_H
#define CHSSCREENSHOTPRESENTATIONATTRIBUTES_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHSWidgetTintParameters.h"

@interface CHSScreenshotPresentationAttributes : NSObject

@property (readonly, copy, nonatomic) NSString *additionalSettingsContext; // ivar: _additionalSettingsContext
@property (readonly, nonatomic) BOOL allowsPrivacySensitiveContent; // ivar: _allowsPrivacySensitiveContent
@property (readonly, nonatomic) NSInteger colorScheme; // ivar: _colorScheme
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters; // ivar: _tintParameters


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif