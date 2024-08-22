// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTLIVECONVERSIONINTERACTION_H
#define UITEXTLIVECONVERSIONINTERACTION_H

@class UIResponder<UITextInput>;


#import "UITextInteraction.h"

@interface UITextLiveConversionInteraction : UITextInteraction {
    UIResponder<UITextInput> *_textInput;
    NSInteger _panOffset;
}


@property (readonly) CGFloat pointSize;


-(id)_liveConversionPanGestureRecognizer;
-(id)_liveConversionTapGestureRecognizer;
-(id)initWithTextInput:(id)arg0 ;
-(void)_pan:(id)arg0 ;
-(void)_tap:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif