// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICABSTRACTTEXTATTACHMENT_H
#define ICABSTRACTTEXTATTACHMENT_H

@class NSTextAttachment, ICBaseAttachment, NSString, UIColor;
@protocol TTAttachment;



@interface ICAbstractTextAttachment : NSTextAttachment <TTAttachment>



@property (retain, nonatomic) ICBaseAttachment *attachment; // ivar: _attachment
@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) NSString *attachmentUTI;
@property (readonly, nonatomic) BOOL containsFindableText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUnsupported) BOOL unsupported;
@property (readonly, copy, nonatomic) NSString *viewIdentifier;


+(id)textAttachmentWithBaseAttachment:(id)arg0 ;
-(BOOL)allowsTextAttachmentView;
-(BOOL)isEqualToModelComparable:(id)arg0 ;
-(BOOL)usesTextAttachmentView;
-(id)attachmentInContext:(id)arg0 ;
-(id)initWithData:(id)arg0 ofType:(id)arg1 ;
-(id)inlineAttachmentInContext:(id)arg0 ;
-(id)newlyCreatedView;
-(id)newlyCreatedViewForManualRendering;
-(id)newlyCreatedViewForManualRendering:(BOOL)arg0 ;


@end


#endif