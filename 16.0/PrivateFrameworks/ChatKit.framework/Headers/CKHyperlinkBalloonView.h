// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKHYPERLINKBALLOONVIEW_H
#define CKHYPERLINKBALLOONVIEW_H

@class NSString;
@protocol UITextViewDelegate;


#import "CKTextBalloonView.h"

@interface CKHyperlinkBalloonView : CKTextBalloonView <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_gestureRecognizer:(id)arg0 canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif