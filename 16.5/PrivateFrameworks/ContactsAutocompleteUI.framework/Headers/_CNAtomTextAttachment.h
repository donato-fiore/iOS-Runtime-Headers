// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNATOMTEXTATTACHMENT_H
#define _CNATOMTEXTATTACHMENT_H

@class NSTextAttachment;


#import "CNComposeRecipientAtom.h"
#import "CNComposeRecipient.h"

@interface _CNAtomTextAttachment : NSTextAttachment

@property (retain, nonatomic) CNComposeRecipientAtom *atomView; // ivar: _atomView
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) CNComposeRecipient *recipient;


-(id)attributedStringWithBaseAttributes:(id)arg0 ;
-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(id)initWithAtomView:(id)arg0 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;


@end


#endif