// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEARCHTOKENATTACHMENTVIEWPROVIDER_H
#define _UISEARCHTOKENATTACHMENTVIEWPROVIDER_H

@class NSTextAttachmentViewProvider;


#import "UIView.h"

@interface _UISearchTokenAttachmentViewProvider : NSTextAttachmentViewProvider {
    UIView *_parentView;
}




-(BOOL)isLastAttachmentBeforeText;
-(id)initWithTextAttachment:(id)arg0 parentView:(id)arg1 textLayoutManager:(id)arg2 location:(id)arg3 ;
-(struct CGRect )attachmentBoundsForAttributes:(id)arg0 location:(id)arg1 textContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 position:(struct CGPoint )arg4 ;
-(struct CGRect )attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(void)loadView;


@end


#endif