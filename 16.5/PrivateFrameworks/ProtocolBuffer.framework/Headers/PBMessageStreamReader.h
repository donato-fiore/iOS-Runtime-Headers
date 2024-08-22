// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBMESSAGESTREAMREADER_H
#define PBMESSAGESTREAMREADER_H

@class NSInputStream;

#import <Foundation/Foundation.h>


@interface PBMessageStreamReader : NSObject {
    NSInputStream *_stream;
}


@property (nonatomic) Class classOfNextMessage; // ivar: _classOfNextMessage
@property (readonly, nonatomic) NSUInteger position; // ivar: _position


-(id)initWithStream:(id)arg0 ;
-(id)nextMessage;


@end


#endif