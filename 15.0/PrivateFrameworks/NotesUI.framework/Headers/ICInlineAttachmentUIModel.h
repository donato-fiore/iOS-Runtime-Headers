// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICINLINEATTACHMENTUIMODEL_H
#define ICINLINEATTACHMENTUIMODEL_H

@class ICInlineAttachment, UIColor;

#import <Foundation/Foundation.h>


@interface ICInlineAttachmentUIModel : NSObject

@property (readonly, weak, nonatomic) ICInlineAttachment *attachment; // ivar: _attachment
@property (readonly, nonatomic) UIColor *labelColor;


+(id)attributesForInlineAttachmentUIModel;
+(id)filteredStyleAttributes:(id)arg0 ;
-(id)attributedStringWithSurroundingAttributes:(id)arg0 formatter:(id)arg1 ;
-(id)highlightingAttributedString:(id)arg0 withSurroundingAttributes:(id)arg1 ;
-(id)initWithAttachment:(id)arg0 ;


@end


#endif