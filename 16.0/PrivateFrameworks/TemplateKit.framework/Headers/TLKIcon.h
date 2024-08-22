// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKICON_H
#define TLKICON_H



#import "TLKFormattedTextItem.h"
#import "TLKImage.h"

@interface TLKIcon : TLKFormattedTextItem

@property (retain, nonatomic) TLKImage *image; // ivar: _image


-(NSUInteger)_itemType;


@end


#endif