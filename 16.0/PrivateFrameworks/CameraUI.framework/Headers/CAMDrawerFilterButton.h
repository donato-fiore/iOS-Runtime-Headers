// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMDRAWERFILTERBUTTON_H
#define CAMDRAWERFILTERBUTTON_H



#import "CAMControlDrawerCustomButton.h"

@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on; // ivar: _on


-(BOOL)isSelfExpanding;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseHierarchicalSymbol;
-(NSInteger)controlType;
-(id)imageNameForCurrentState;


@end


#endif