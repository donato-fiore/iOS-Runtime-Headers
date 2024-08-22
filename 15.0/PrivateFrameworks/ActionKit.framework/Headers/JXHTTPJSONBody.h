// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JXHTTPJSONBODY_H
#define JXHTTPJSONBODY_H

@class NSString, NSData;
@protocol JXHTTPRequestBody;

#import <Foundation/Foundation.h>


@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *requestData; // ivar: _requestData
@property (readonly) Class superclass;


+(id)withData:(id)arg0 ;
+(id)withJSONObject:(id)arg0 ;
+(id)withString:(id)arg0 ;
-(NSInteger)httpContentLength;
-(id)httpContentType;
-(id)httpInputStream;
-(id)initWithData:(id)arg0 ;
-(void)httpOperationDidFinishLoading:(id)arg0 ;


@end


#endif