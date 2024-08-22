// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIAPPCLIPBUTTONITEMSTATE_H
#define SEARCHUIAPPCLIPBUTTONITEMSTATE_H

@class SFRequestAppClipInstallCommand;


#import "SearchUIButtonItemState.h"

@interface SearchUIAppClipButtonItemState : SearchUIButtonItemState

@property (retain, nonatomic) SFRequestAppClipInstallCommand *command;


-(BOOL)isPossiblyAvailable;
-(id)cachedStateValue;
-(void)checkIfAvailable:(id)arg0 ;


@end


#endif