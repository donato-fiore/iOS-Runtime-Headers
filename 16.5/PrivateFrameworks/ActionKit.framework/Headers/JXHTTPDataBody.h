// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JXHTTPDATABODY_H
#define JXHTTPDATABODY_H

@class NSData, NSString;
@protocol JXHTTPRequestBody;

#import <Foundation/Foundation.h>


@interface JXHTTPDataBody : NSObject <JXHTTPRequestBody>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *httpContentType; // ivar: _httpContentType
@property (readonly) Class superclass;


+(id)withData:(id)arg0 ;
+(id)withData:(id)arg0 contentType:(id)arg1 ;
-(NSInteger)httpContentLength;
-(id)httpInputStream;
-(id)initWithData:(id)arg0 contentType:(id)arg1 ;


@end


#endif