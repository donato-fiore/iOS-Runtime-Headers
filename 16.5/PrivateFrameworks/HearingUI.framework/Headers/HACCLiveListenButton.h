// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)init;
-(void)liveListenAudioLevelDidChange:(CGFloat)arg0 ;
-(void)updateValue;


@end


#endif