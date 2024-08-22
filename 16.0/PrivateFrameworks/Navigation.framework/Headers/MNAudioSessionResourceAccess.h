// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNAUDIOSESSIONRESOURCEACCESS_H
#define MNAUDIOSESSIONRESOURCEACCESS_H

@protocol OS_dispatch_queue, MNAudioSessionAccessDelegate;

#import <Foundation/Foundation.h>


@interface MNAudioSessionResourceAccess : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
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
-(void)_changeNumChannels;


@end


#endif