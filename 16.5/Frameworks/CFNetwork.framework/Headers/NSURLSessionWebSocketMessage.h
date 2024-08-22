// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLSESSIONWEBSOCKETMESSAGE_H
#define NSURLSESSIONWEBSOCKETMESSAGE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface NSURLSessionWebSocketMessage : NSObject {
    id *content;
}


@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;
@property (readonly) NSInteger type; // ivar: _type


-(id)initWithData:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif