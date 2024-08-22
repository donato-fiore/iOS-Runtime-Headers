// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPARAMETEREVENT_H
#define AVPARAMETEREVENT_H



#import "AVMusicEvent.h"

@interface AVParameterEvent : AVMusicEvent {
    ParameterEvent _event;
}


@property unsigned int element;
@property (readonly) *ParameterEvent event;
@property unsigned int parameterID;
@property unsigned int scope;
@property float value;


-(id)initWithParameterEvent:(struct ParameterEvent *)arg0 ;
-(id)initWithParameterID:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 value:(float)arg3 ;


@end


#endif