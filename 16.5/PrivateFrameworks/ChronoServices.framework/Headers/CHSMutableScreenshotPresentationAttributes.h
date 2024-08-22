// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSMUTABLESCREENSHOTPRESENTATIONATTRIBUTES_H
#define CHSMUTABLESCREENSHOTPRESENTATIONATTRIBUTES_H

@class NSString;


#import "CHSScreenshotPresentationAttributes.h"
#import "CHSWidgetTintParameters.h"

@interface CHSMutableScreenshotPresentationAttributes : CHSScreenshotPresentationAttributes

@property (copy, nonatomic) NSString *additionalSettingsContext;
@property (nonatomic) BOOL allowsPrivacySensitiveContent;
@property (nonatomic) NSInteger colorScheme;
@property (copy, nonatomic) CHSWidgetTintParameters *tintParameters;




@end


#endif