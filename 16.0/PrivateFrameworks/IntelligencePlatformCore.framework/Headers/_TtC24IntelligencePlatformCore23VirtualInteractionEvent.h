// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC24INTELLIGENCEPLATFORMCORE23VIRTUALINTERACTIONEVENT_H
#define _TTC24INTELLIGENCEPLATFORMCORE23VIRTUALINTERACTIONEVENT_H

@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface _TtC24IntelligencePlatformCore23VirtualInteractionEvent : NSObject <BMStoreData>

 {
    ? virtualInteraction;
}


@property (nonatomic, readonly) unsigned int dataVersion;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)init;
-(id)serialize;


@end


#endif