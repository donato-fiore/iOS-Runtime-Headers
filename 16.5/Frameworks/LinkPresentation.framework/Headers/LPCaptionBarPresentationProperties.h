// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCAPTIONBARPRESENTATIONPROPERTIES_H
#define LPCAPTIONBARPRESENTATIONPROPERTIES_H

@class NSArray, NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "LPCaptionRowPresentationProperties.h"
#import "LPCaptionButtonPresentationProperties.h"
#import "LPImage.h"
#import "LPImagePresentationProperties.h"

@interface LPCaptionBarPresentationProperties : NSObject {
    LPCaptionRowPresentationProperties *_aboveTop;
    LPCaptionRowPresentationProperties *_top;
    LPCaptionRowPresentationProperties *_bottom;
    LPCaptionRowPresentationProperties *_belowBottom;
}


@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *aboveTop;
@property (retain, nonatomic) NSArray *additionalLeadingIcons; // ivar: _additionalLeadingIcons
@property (retain, nonatomic) NSArray *additionalTrailingIcons; // ivar: _additionalTrailingIcons
@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *belowBottom;
@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *bottom;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button; // ivar: _button
@property (copy, nonatomic) NSString *buttonCaption;
@property (readonly, nonatomic) BOOL hasAnyContent;
@property (nonatomic) NSInteger leadingAccessoryType; // ivar: _leadingAccessoryType
@property (retain, nonatomic) LPImage *leadingIcon; // ivar: _leadingIcon
@property (retain, nonatomic) LPImage *leadingIconBadge; // ivar: _leadingIconBadge
@property (retain, nonatomic) LPImagePresentationProperties *leadingIconBadgeProperties; // ivar: _leadingIconBadgeProperties
@property (retain, nonatomic) LPImagePresentationProperties *leadingIconProperties; // ivar: _leadingIconProperties
@property (nonatomic) CGSize leadingIconSize; // ivar: _leadingIconSize
@property (retain, nonatomic) NSNumber *minimumHeight; // ivar: _minimumHeight
@property (nonatomic) BOOL shouldHighlightIndependently; // ivar: _shouldHighlightIndependently
@property (readonly, retain, nonatomic) LPCaptionRowPresentationProperties *top;
@property (nonatomic) NSInteger trailingAccessoryType; // ivar: _trailingAccessoryType
@property (retain, nonatomic) LPImage *trailingIcon; // ivar: _trailingIcon
@property (retain, nonatomic) LPImage *trailingIconBadge; // ivar: _trailingIconBadge
@property (retain, nonatomic) LPImagePresentationProperties *trailingIconBadgeProperties; // ivar: _trailingIconBadgeProperties
@property (retain, nonatomic) LPImagePresentationProperties *trailingIconProperties; // ivar: _trailingIconProperties
@property (nonatomic) CGSize trailingIconSize; // ivar: _trailingIconSize


-(NSInteger)leftAccessoryType;
-(NSInteger)rightAccessoryType;
-(id)init;
-(id)leftIcon;
-(id)leftIconProperties;
-(id)rightIcon;
-(id)rightIconProperties;
-(void)applyToAllCaptions:(id)arg0 ;


@end


#endif