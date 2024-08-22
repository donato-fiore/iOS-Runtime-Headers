// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUHOSTDELEGATE_H
#define AUHOSTDELEGATE_H

@protocol AUAudioUnitHostProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AUAudioUnit.h"

@interface AUHostDelegate : NSObject <AUAudioUnitHostProtocol>

 {
    NSObject<OS_dispatch_queue> *mParameterQueue;
}


@property (weak, nonatomic) AUAudioUnit *audioUnit; // ivar: _audioUnit


-(id)init;
-(void)MIDICIProfileChanged:(unsigned char)arg0 channel:(unsigned char)arg1 profile:(id)arg2 enabled:(BOOL)arg3 ;
-(void)propertiesChanged:(id)arg0 ;
-(void)speechSynthesisMetadataAvailable:(id)arg0 speechRequest:(id)arg1 ;
-(void)syncParameter:(NSUInteger)arg0 value:(float)arg1 extOriginator:(NSUInteger)arg2 hostTime:(NSUInteger)arg3 eventType:(unsigned int)arg4 ;


@end


#endif