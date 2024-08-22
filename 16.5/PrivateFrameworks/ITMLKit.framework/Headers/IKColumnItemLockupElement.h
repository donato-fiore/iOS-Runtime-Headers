// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCOLUMNITEMLOCKUPELEMENT_H
#define IKCOLUMNITEMLOCKUPELEMENT_H

@class NSString, NSArray;


#import "IKViewElement.h"
#import "IKButtonElement.h"
#import "IKTextElement.h"
#import "IKImageElement.h"
#import "IKOrdinalElement.h"
#import "IKTextBadgeAttachment.h"
#import "IKVideoElement.h"

@interface IKColumnItemLockupElement : IKViewElement

@property (readonly, retain, nonatomic) IKButtonElement *button;
@property (readonly, copy, nonatomic) NSString *columnItemType;
@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, nonatomic) BOOL hasSeparator;
@property (readonly, nonatomic) IKImageElement *image;
@property (readonly, nonatomic) NSArray *images;
@property (readonly, nonatomic) BOOL isWatchlisted;
@property (readonly, nonatomic) BOOL onlyVisibleOnColumnHighlight;
@property (readonly, retain, nonatomic) IKOrdinalElement *ordinal;
@property (readonly, retain, nonatomic) IKTextElement *secondarySubtitle;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, nonatomic) IKTextBadgeAttachment *subtitleBadge;
@property (readonly, retain, nonatomic) NSArray *textElements;
@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, nonatomic) IKTextBadgeAttachment *titleBadge;
@property (readonly, retain, nonatomic) IKVideoElement *video;


-(void)_computeTitle:(*id)arg0 subtitle:(*id)arg1 secondarySubtitle:(*id)arg2 unstyledTextElements:(*id)arg3 ;


@end


#endif