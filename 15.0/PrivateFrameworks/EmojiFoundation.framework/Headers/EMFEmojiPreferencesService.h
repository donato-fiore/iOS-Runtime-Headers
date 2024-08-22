// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMFEMOJIPREFERENCESSERVICE_H
#define EMFEMOJIPREFERENCESSERVICE_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EMFEmojiPreferences.h"

@interface EMFEmojiPreferencesService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EMFEmojiPreferences *preferences; // ivar: _preferences
@property (readonly) Class superclass;


+(id)sharedServiceWithMachName:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMachName:(id)arg0 ;
-(void)_createPreferencesIfNecessary;
-(void)dealloc;


@end


#endif