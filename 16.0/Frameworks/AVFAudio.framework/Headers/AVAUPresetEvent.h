// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUPRESETEVENT_H
#define AVAUPRESETEVENT_H

@class NSDictionary;


#import "AVMusicEvent.h"

@interface AVAUPresetEvent : AVMusicEvent {
    AUPresetEvent _event;
}


@property unsigned int element;
@property (readonly) *AUPresetEvent event;
@property (readonly, copy) NSDictionary *presetDictionary;
@property unsigned int scope;


-(id)initWithScope:(unsigned int)arg0 element:(unsigned int)arg1 dictionary:(id)arg2 ;
-(void)dealloc;


@end


#endif