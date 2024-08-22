// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKAPPPLAYLISTBRIDGE_H
#define IKAPPPLAYLISTBRIDGE_H

@protocol IKAppPlaylist;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"
#import "IKJSPlaylist.h"

@interface IKAppPlaylistBridge : NSObject

@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, weak, nonatomic) NSObject<IKAppPlaylist> *appPlaylist; // ivar: _appPlaylist
@property (nonatomic) NSInteger endAction;
@property (readonly, weak, nonatomic) IKJSPlaylist *jsPlaylist; // ivar: _jsPlaylist
@property (readonly) NSUInteger length;
@property (nonatomic) NSInteger repeatMode;


-(id)initWithAppContext:(id)arg0 jsPlaylist:(id)arg1 ;
-(id)item:(NSInteger)arg0 ;
-(id)replaceItemsAt:(NSInteger)arg0 count:(NSUInteger)arg1 with:(id)arg2 ;
-(void)_evaluateDelegateBlockSync:(id)arg0 ;
-(void)cleanup;


@end


#endif