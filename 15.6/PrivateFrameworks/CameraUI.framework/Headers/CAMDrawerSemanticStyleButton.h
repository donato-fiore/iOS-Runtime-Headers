// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDRAWERSEMANTICSTYLEBUTTON_H
#define CAMDRAWERSEMANTICSTYLEBUTTON_H



#import "CAMControlDrawerCustomButton.h"
#import "CAMSemanticStyle.h"

@interface CAMDrawerSemanticStyleButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (retain, nonatomic, setter=setSemanticStyle:) CAMSemanticStyle *semanticStyle; // ivar: _semanticStyle


-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(NSInteger)controlType;
-(id)imageNameForCurrentState;


@end


#endif