// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYPRESENTATIONOPTIONS_H
#define ACUISACTIVITYPRESENTATIONOPTIONS_H

@class NSArray, BSColor;

#import <Foundation/Foundation.h>


@interface ACUISActivityPresentationOptions : NSObject

@property (readonly, nonatomic) NSArray *hostIgnoredTouchedRects; // ivar: _hostIgnoredTouchedRects
@property (readonly, nonatomic) BOOL isUserDismissalAllowedOnLockScreen; // ivar: _isUserDismissalAllowedOnLockScreen
@property (readonly, nonatomic) BSColor *platterTintColor; // ivar: _platterTintColor


-(id)initWithPresentationOptions:(id)arg0 ;


@end


#endif