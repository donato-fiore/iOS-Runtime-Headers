// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUAUDIOUNITBUS_H
#define AUAUDIOUNITBUS_H

@class AVAudioFormat, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "AUAudioUnit.h"

@interface AUAudioUnitBus : NSObject {
    BOOL _removingObserverWithContext;
    AVAudioFormat *_format;
    NSArray *_supportedChannelCounts;
    unsigned int _maximumChannelCount;
    BOOL _enabled;
    ? _observers;
}


@property (readonly, nonatomic) NSInteger busType; // ivar: _busType
@property (nonatomic) CGFloat contextPresentationLatency; // ivar: _contextPresentationLatency
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (copy, nonatomic) NSString *name; // ivar: _name
@property ? observers;
@property (readonly, nonatomic) AUAudioUnit *ownerAudioUnit; // ivar: _ownerAudioUnit
@property (nonatomic) BOOL shouldAllocateBuffer; // ivar: _shouldAllocateBuffer
@property (readonly, copy, nonatomic) NSArray *supportedChannelLayoutTags; // ivar: _supportedChannelLayoutTags


-(id)initWithFormat:(id)arg0 error:(*id)arg1 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;


@end


#endif