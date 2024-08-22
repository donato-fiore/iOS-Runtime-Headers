// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWNODEDROPPEDSAMPLEMESSAGE_H
#define BWNODEDROPPEDSAMPLEMESSAGE_H



#import "BWNodeMessage.h"
#import "BWDroppedSample.h"

@interface BWNodeDroppedSampleMessage : BWNodeMessage {
    BWDroppedSample *_droppedSample;
}


@property (readonly) BWDroppedSample *droppedSample;


+(id)newMessageWithDroppedSample:(id)arg0 ;
-(id)_initWithDroppedSample:(id)arg0 ;
-(void)dealloc;


@end


#endif