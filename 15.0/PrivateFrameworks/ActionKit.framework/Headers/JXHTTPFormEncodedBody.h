// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JXHTTPFORMENCODEDBODY_H
#define JXHTTPFORMENCODEDBODY_H

@class NSString, NSMutableDictionary;
@protocol JXHTTPRequestBody;

#import <Foundation/Foundation.h>


@interface JXHTTPFormEncodedBody : NSObject <JXHTTPRequestBody>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)withDictionary:(id)arg0 ;
-(NSInteger)httpContentLength;
-(id)httpContentType;
-(id)httpInputStream;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)requestData;


@end


#endif