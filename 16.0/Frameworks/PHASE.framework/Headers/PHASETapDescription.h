// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASETAPDESCRIPTION_H
#define PHASETAPDESCRIPTION_H

@class NSMutableString, AVAudioFormat, NSString;

#import <Foundation/Foundation.h>


@interface PHASETapDescription : NSObject {
    NSMutableString *_uidString;
}


@property (readonly, nonatomic) unsigned int audioSessionToken; // ivar: _audioSessionToken
@property (readonly, nonatomic) NSInteger binding; // ivar: _binding
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) NSInteger streamType; // ivar: _streamType
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *uidString;


-(id)initInternalWithType:(NSInteger)arg0 ;
-(id)initScreenSharingTapOfType:(NSInteger)arg0 ;
-(id)initSystemTapOfType:(NSInteger)arg0 ;
-(id)initWithAudioSessionToken:(unsigned int)arg0 tapType:(NSInteger)arg1 ;
-(id)initWithProcessIdentifier:(int)arg0 tapType:(NSInteger)arg1 ;
-(id)initWithSceneIdentifier:(id)arg0 tapType:(NSInteger)arg1 ;
-(id)initWithStreamType:(NSInteger)arg0 tapType:(NSInteger)arg1 ;


@end


#endif