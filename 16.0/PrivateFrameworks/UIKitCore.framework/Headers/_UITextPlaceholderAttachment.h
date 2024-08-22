// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTPLACEHOLDERATTACHMENT_H
#define _UITEXTPLACEHOLDERATTACHMENT_H

@class NSTextAttachment, NSDictionary;



@interface _UITextPlaceholderAttachment : NSTextAttachment

@property (nonatomic) _NSRange attachmentRange; // ivar: _attachmentRange
@property (copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion; // ivar: _typingAttributesBeforeInsertion


-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;


@end


#endif