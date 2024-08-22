// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSLIDESHOWVIEWMODELCHANGE_H
#define PUSLIDESHOWVIEWMODELCHANGE_H



#import "PUViewModelChange.h"

@interface PUSlideshowViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setCurrentStateDidChange:) BOOL currentStateDidChange; // ivar: _currentStateDidChange
@property (nonatomic, setter=_setWantsChromeVisibleDidChange:) BOOL wantsChromeVisibleDidChange; // ivar: _wantsChromeVisibleDidChange


-(BOOL)hasChanges;


@end


#endif