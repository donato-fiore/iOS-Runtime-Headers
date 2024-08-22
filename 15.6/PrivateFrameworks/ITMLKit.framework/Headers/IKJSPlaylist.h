// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSPLAYLIST_H
#define IKJSPLAYLIST_H

@protocol IKJSPlaylist;


#import "IKJSObject.h"
#import "IKAppPlaylistBridge.h"

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist>



@property (readonly, nonatomic) IKAppPlaylistBridge *bridge; // ivar: _bridge
@property (nonatomic) NSInteger endAction;
@property (readonly, nonatomic) NSUInteger length;
@property (nonatomic) NSInteger repeatMode;


-(id)init;
-(id)item:(NSInteger)arg0 ;
-(id)pop;
-(id)splice:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)push:(id)arg0 ;


@end


#endif