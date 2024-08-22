// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINLINETEXTFINDINGRESULT_H
#define ICINLINETEXTFINDINGRESULT_H

@class ICInlineAttachment, NSAttributedString;


#import "ICTextFindingResult.h"

@interface ICInlineTextFindingResult : ICTextFindingResult

@property (weak, nonatomic) ICInlineAttachment *attachment; // ivar: _attachment
@property (nonatomic) _NSRange displayTextRange; // ivar: _displayTextRange
@property (retain, nonatomic) NSAttributedString *findableString; // ivar: _findableString


-(NSInteger)compare:(id)arg0 ;
-(id)framesForHighlightInTextView:(id)arg0 ;
-(id)inlineAttachmentViewControllerInTextView:(id)arg0 ;
-(id)viewForHighlightsInTextView:(id)arg0 ;


@end


#endif