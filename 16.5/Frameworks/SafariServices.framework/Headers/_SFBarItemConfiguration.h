// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFBARITEMCONFIGURATION_H
#define _SFBARITEMCONFIGURATION_H

@class NSAttributedString, UIImage, UIMenu, NSString;

#import <Foundation/Foundation.h>


@interface _SFBarItemConfiguration : NSObject

@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL hasImage; // ivar: _hasImage
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;


@end


#endif