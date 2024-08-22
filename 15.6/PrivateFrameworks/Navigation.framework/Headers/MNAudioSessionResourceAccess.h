// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNAUDIOSESSIONRESOURCEACCESS_H
#define MNAUDIOSESSIONRESOURCEACCESS_H

@class NSTimer;
@protocol OS_dispatch_queue, MNAudioSessionAccessDelegate;

#import <Foundation/Foundation.h>


@interface MNAudioSessionResourceAccess : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
    NSUInteger _state;
}


@property (weak, nonatomic) NSObject<MNAudioSessionAccessDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger promptStyle;
@property (readonly, nonatomic) NSUInteger state;


+(BOOL)deviceSpeakerIsInUse;
+(BOOL)headphonesAreInUse;
-(BOOL)activate;
-(BOOL)deactivate;
-(BOOL)updatePropertiesWithOptions:(id)arg0 forTransportType:(int)arg1 error:(*id)arg2 ;
-(id)_stringForAVAudioSessionErrorCode:(NSInteger)arg0 ;
-(id)init;
-(void)_cancelTimer;
-(void)_changeNumChannels;
-(void)_createTimer;
-(void)_timeoutOccurred:(id)arg0 ;
-(void)dealloc;


@end


#endif