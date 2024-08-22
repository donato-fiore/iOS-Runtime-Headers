// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENTHTTPCLIENT_H
#define ENTHTTPCLIENT_H

@class NSString, NSMutableData, NSData, NSURL;
@protocol ENTTransport;

#import <Foundation/Foundation.h>


@interface ENTHTTPClient : NSObject <ENTTransport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableData *requestData; // ivar: _requestData
@property (retain, nonatomic) NSData *responseData; // ivar: _responseData
@property (nonatomic) int responseDataOffset; // ivar: _responseDataOffset
@property (readonly) Class superclass;
@property (nonatomic) int timeout; // ivar: _timeout
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent


-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 userAgent:(id)arg1 timeout:(int)arg2 ;
-(id)newRequest;
-(int)readAll:(char *)arg0 offset:(int)arg1 length:(int)arg2 ;
-(void)cancel;
-(void)flush;
-(void)write:(char *)arg0 offset:(unsigned int)arg1 length:(unsigned int)arg2 ;


@end


#endif