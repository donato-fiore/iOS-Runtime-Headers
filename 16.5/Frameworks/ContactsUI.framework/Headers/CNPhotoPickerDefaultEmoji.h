// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERDEFAULTEMOJI_H
#define CNPHOTOPICKERDEFAULTEMOJI_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CNPhotoPickerColorVariant.h"

@interface CNPhotoPickerDefaultEmoji : NSObject

@property (retain, nonatomic) CNPhotoPickerColorVariant *colorVariant; // ivar: _colorVariant
@property (retain, nonatomic) NSString *emojiString; // ivar: _emojiString


-(id)initWithEmojiString:(id)arg0 colorVariant:(id)arg1 ;


@end


#endif