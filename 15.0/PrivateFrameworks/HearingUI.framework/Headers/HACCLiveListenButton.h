// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HACCLIVELISTENBUTTON_H
#define HACCLIVELISTENBUTTON_H



#import "HUICCToggleButton.h"
#import "HACCLiveListenLevelGroup.h"

@interface HACCLiveListenButton : HUICCToggleButton

@property (nonatomic) BOOL isListening; // ivar: _isListening
@property (retain, nonatomic) HACCLiveListenLevelGroup *levelGroup; // ivar: _levelGroup


-(BOOL)enabled;
-(id)accessoryView;
-(id)contentValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)liveListenAudioLevelDidChange:(CGFloat)arg0 ;
-(void)updateValue;


@end


#endif