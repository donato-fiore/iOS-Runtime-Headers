// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINLINECANVASTEXTATTACHMENT_H
#define ICINLINECANVASTEXTATTACHMENT_H

@class NSArray;


#import "ICBaseTextAttachment.h"

@interface ICInlineCanvasTextAttachment : ICBaseTextAttachment

@property (readonly, nonatomic) NSArray *attachmentViews;
@property (readonly, nonatomic) NSArray *inlineViews;


-(void)setViewSelected:(BOOL)arg0 inWindow:(id)arg1 ;
-(void)updatePaletteVisibility;
-(void)updatePaletteVisibilityToVisible:(BOOL)arg0 ;


@end


#endif