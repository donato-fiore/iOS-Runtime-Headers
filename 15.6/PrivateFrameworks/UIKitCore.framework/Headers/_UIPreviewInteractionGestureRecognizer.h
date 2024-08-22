// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPREVIEWINTERACTIONGESTURERECOGNIZER_H
#define _UIPREVIEWINTERACTIONGESTURERECOGNIZER_H



#import "UILongPressGestureRecognizer.h"

@interface _UIPreviewInteractionGestureRecognizer : UILongPressGestureRecognizer



-(void)cancel;
-(void)recognize;
-(void)setDelegate:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif