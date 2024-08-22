// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSCREENMIRRORINGUICONTROLLINGOBSERVER_H
#define MRSCREENMIRRORINGUICONTROLLINGOBSERVER_H

@protocol MRScreenMirroringQuickControlsUIControllable;


#import "MRScreenMirroringObserver.h"

@interface MRScreenMirroringUIControllingObserver : MRScreenMirroringObserver

@property (readonly, nonatomic) MRScreenMirroringObserver *internalObserver; // ivar: _internalObserver
@property (retain, nonatomic) NSObject<MRScreenMirroringQuickControlsUIControllable> *uiController; // ivar: _uiController


-(id)init;
-(void)_mirrorStateChanged:(BOOL)arg0 screenType:(unsigned int)arg1 ;


@end


#endif