// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTEXTINPUTINSERTIONCARETGESTURE_H
#define CHTEXTINPUTINSERTIONCARETGESTURE_H



#import "CHTextInputGesture.h"

@interface CHTextInputInsertionCaretGesture : CHTextInputGesture

@property (readonly, nonatomic) CGPoint caretTipPoint; // ivar: _caretTipPoint


-(NSInteger)caretDirection;
-(id)initWithCaretTipPoint:(struct CGPoint )arg0 targetContentInfo:(id)arg1 locale:(id)arg2 normalizedDrawing:(id)arg3 originalDrawing:(id)arg4 ;
-(void)getAffectedRange:(struct _NSRange *)arg0 expandedToFullTokens:(*BOOL)arg1 ;


@end


#endif