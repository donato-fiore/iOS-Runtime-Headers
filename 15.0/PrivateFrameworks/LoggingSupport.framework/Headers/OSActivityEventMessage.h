// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSACTIVITYEVENTMESSAGE_H
#define OSACTIVITYEVENTMESSAGE_H

@class NSData, NSMutableArray, NSString;


#import "OSActivityEvent.h"

@interface OSActivityEventMessage : OSActivityEvent {
    NSData *_bufferPrivateData;
    NSData *_bufferData;
}


@property (readonly, nonatomic) NSMutableArray *arguments;
@property (readonly, copy) NSString *format;


-(void)fillEventData:(char *)arg0 length:(NSUInteger)arg1 privateBuffer:(char *)arg2 length:(NSUInteger)arg3 ;


@end


#endif