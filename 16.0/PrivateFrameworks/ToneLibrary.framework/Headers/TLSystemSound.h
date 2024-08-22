// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLSYSTEMSOUND_H
#define TLSYSTEMSOUND_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface TLSystemSound : NSObject {
    os_unfair_lock_s _lock;
    unsigned int _soundID;
    BOOL _shouldDisposeOfSoundID;
}


@property (readonly, nonatomic) BOOL requiresLongFormPlayback; // ivar: _requiresLongFormPlayback
@property (readonly, nonatomic) NSURL *soundFileURL; // ivar: _soundFileURL
@property (readonly, nonatomic) unsigned int soundID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)_description;
-(id)description;
-(id)initWithSoundFileURL:(id)arg0 soundID:(unsigned int)arg1 requiresLongFormPlayback:(BOOL)arg2 ;
-(void)_ensureUnderlyingSoundCreated;
-(void)_prepareForDealloc;
-(void)beginRequiringUnderlyingSoundLoaded;
-(void)dealloc;
-(void)endRequiringUnderlyingSoundLoaded;


@end


#endif