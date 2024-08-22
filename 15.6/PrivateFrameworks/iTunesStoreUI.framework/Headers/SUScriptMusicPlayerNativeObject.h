// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTMUSICPLAYERNATIVEOBJECT_H
#define SUSCRIPTMUSICPLAYERNATIVEOBJECT_H



#import "SUScriptNativeObject.h"

@interface SUScriptMusicPlayerNativeObject : SUScriptNativeObject



-(void)_nowPlayingChangeNotification:(id)arg0 ;
-(void)_playbackStateChangeNotification:(id)arg0 ;
-(void)_volumeChangeNotification:(id)arg0 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;


@end


#endif