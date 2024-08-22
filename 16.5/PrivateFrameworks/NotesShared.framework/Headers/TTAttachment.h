// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTATTACHMENT_H
#define TTATTACHMENT_H

@class NSString;
@protocol TTAttachment;

#import <Foundation/Foundation.h>


@interface TTAttachment : NSObject <TTAttachment>



@property (copy, nonatomic) NSString *attachmentIdentifier; // ivar: _attachmentIdentifier
@property (copy, nonatomic) NSString *attachmentUTI; // ivar: _attachmentUTI
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isAttachment:(id)arg0 equalToModelComparable:(id)arg1 ;
+(BOOL)isInlineAttachment:(id)arg0 ;
+(BOOL)typeUTIIsInlineAttachment:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModelComparable:(id)arg0 ;
-(id)attachmentInContext:(id)arg0 ;
-(id)inlineAttachmentInContext:(id)arg0 ;
-(struct CGRect )attachmentBoundsForAttributes:(id)arg0 location:(id)arg1 textContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 position:(struct CGPoint )arg4 ;


@end


#endif