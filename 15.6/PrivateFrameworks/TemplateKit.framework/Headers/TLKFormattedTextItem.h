// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKFORMATTEDTEXTITEM_H
#define TLKFORMATTEDTEXTITEM_H



#import "TLKObject.h"

@interface TLKFormattedTextItem : TLKObject

@property (nonatomic) NSInteger color; // ivar: _color
@property (nonatomic) BOOL isBold; // ivar: _isBold
@property (nonatomic) BOOL isEmphasized; // ivar: _isEmphasized


-(BOOL)hasContent;
-(NSUInteger)_itemType;


@end


#endif