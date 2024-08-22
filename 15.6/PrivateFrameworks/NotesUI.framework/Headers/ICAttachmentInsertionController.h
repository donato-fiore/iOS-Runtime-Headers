// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTINSERTIONCONTROLLER_H
#define ICATTACHMENTINSERTIONCONTROLLER_H

@class ICNote;
@protocol ICAttachmentInsertionDelegate;

#import <Foundation/Foundation.h>


@interface ICAttachmentInsertionController : NSObject

@property (weak, nonatomic) NSObject<ICAttachmentInsertionDelegate> *attachmentDelegate; // ivar: _attachmentDelegate
@property (readonly, weak, nonatomic) ICNote *note; // ivar: _note


-(id)init;
-(id)initWithNote:(id)arg0 ;
-(void)_addInlineAttachment:(id)arg0 inTextStorage:(id)arg1 atTextRange:(struct _NSRange )arg2 ;
-(void)addAttachment:(id)arg0 ;
-(void)addAttachment:(id)arg0 atTextLocation:(NSUInteger)arg1 ;
-(void)addAttachment:(id)arg0 atTextRange:(struct _NSRange )arg1 ;
-(void)addInlineAttachment:(id)arg0 atTextRange:(struct _NSRange )arg1 ;
-(void)addInlineAttachment:(id)arg0 atTextRange:(struct _NSRange )arg1 textView:(id)arg2 ;


@end


#endif