// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JXHTTPFILEBODY_H
#define JXHTTPFILEBODY_H

@class NSString;
@protocol JXHTTPRequestBody;

#import <Foundation/Foundation.h>


@interface JXHTTPFileBody : NSObject <JXHTTPRequestBody>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *httpContentType; // ivar: _httpContentType
@property (readonly) Class superclass;


+(id)withFilePath:(id)arg0 ;
+(id)withFilePath:(id)arg0 contentType:(id)arg1 ;
-(NSInteger)httpContentLength;
-(id)httpInputStream;
-(id)initWithFilePath:(id)arg0 contentType:(id)arg1 ;


@end


#endif