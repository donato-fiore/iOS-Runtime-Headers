// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSPREYMESSAGEREADER_H
#define OSPREYMESSAGEREADER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface OspreyMessageReader : NSObject {
    id *_messageHandler;
    NSUInteger _readerState;
    NSUInteger _messageSequence;
    BOOL _currentMessageCompressed;
    NSUInteger _currentMessageSize;
    NSMutableData *_messageBuffer;
}




-(id)initWithMessageHandler:(id)arg0 ;
-(void)_produceMessageBody:(id)arg0 ;
-(void)readData:(id)arg0 ;


@end


#endif