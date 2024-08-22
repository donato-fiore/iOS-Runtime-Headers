// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATHTTPMESSAGEPARSER_H
#define CATHTTPMESSAGEPARSER_H

@class NSDictionary;
@protocol CATHTTPMessageParserDelegate;

#import <Foundation/Foundation.h>


@interface CATHTTPMessageParser : NSObject {
    *__CFHTTPMessage mCurrentMessage;
    NSDictionary *mCurrentHeaderFields;
    NSUInteger mCurrentBytesReceived;
}


@property (weak, nonatomic) NSObject<CATHTTPMessageParserDelegate> *delegate; // ivar: _delegate


+(id)encodeRequestData:(id)arg0 ;
+(id)responseHeaderForContentWithLength:(NSUInteger)arg0 ;
-(BOOL)appendBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)delegateDidReceiveRequestData:(id)arg0 ;
-(void)delegateDidReceiveRequestWithURL:(id)arg0 ;
-(void)delegateDidReceiveResponseData:(id)arg0 moreComing:(BOOL)arg1 ;


@end


#endif