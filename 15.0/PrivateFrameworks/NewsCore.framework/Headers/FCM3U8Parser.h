// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCM3U8PARSER_H
#define FCM3U8PARSER_H

@class NSData, NSMutableData, NSError, NSString;
@protocol NSURLSessionDataDelegate, FCM3U8ParserDelegate;

#import <Foundation/Foundation.h>


@interface FCM3U8Parser : NSObject <NSURLSessionDataDelegate>

 {
    BOOL _collectForRewrite;
    id<FCM3U8ParserDelegate> *_delegate;
    NSData *_data;
    NSMutableData *_bytes;
    NSError *_error;
    NSMutableData *_collectedData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif