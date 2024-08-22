// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTEINPUTASSISTANTVIEWCONTROLLER_H
#define PKPALETTEINPUTASSISTANTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PKDrawingPaletteInputAssistantViewStateObserver;


#import "PKDrawingPaletteInputAssistantView.h"

@interface PKPaletteInputAssistantViewController : UIViewController <PKDrawingPaletteInputAssistantViewStateObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKDrawingPaletteInputAssistantView *inputAssistantView; // ivar: _inputAssistantView
@property (readonly) Class superclass;


-(struct CGSize )_preferredContentSize;
-(void)_updateUI;
-(void)paletteInputAssistantViewDidChangeViewState:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif