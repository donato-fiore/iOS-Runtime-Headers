// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUAUDIOUNITBUS_XPC_H
#define AUAUDIOUNITBUS_XPC_H

@class NSXPCConnection, AVAudioFormat, NSArray;
@protocol NSSecureCoding;


#import "AUAudioUnitBus.h"
#import "AUAudioUnit_XPC.h"

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding>

 {
    AUAudioUnit_XPC *_audioUnit;
    NSXPCConnection *_remoteAUXPCConnection;
    unsigned int _scope;
    unsigned int _element;
    AVAudioFormat *_format;
    NSArray *_supportedChannelLayoutTags;
    BOOL _removingObserverWithContext;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEnabled;
-(BOOL)setFormat:(id)arg0 error:(*id)arg1 ;
-(id)format;
-(id)initWithCoder:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)propertyChanged:(id)arg0 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif