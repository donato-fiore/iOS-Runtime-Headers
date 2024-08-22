// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSYSTEMTEXTINPUTRESPONDER_H
#define TSDSYSTEMTEXTINPUTRESPONDER_H

@protocol UITextAutoscrolling;


#import "TSDTextInputResponder.h"

@interface TSDSystemTextInputResponder : TSDTextInputResponder <UITextAutoscrolling>





-(void)cancelAutoscroll;
-(void)copy:(id)arg0 ;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)startAutoscroll:(struct CGPoint )arg0 ;


@end


#endif