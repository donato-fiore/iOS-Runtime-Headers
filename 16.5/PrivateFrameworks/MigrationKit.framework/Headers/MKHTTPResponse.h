// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKHTTPRESPONSE_H
#define MKHTTPRESPONSE_H

@class NSData;

#import <Foundation/Foundation.h>

#import "MKHTTPHeaders.h"

@interface MKHTTPResponse : NSObject

@property (retain, nonatomic) NSData *body; // ivar: _body
@property (retain, nonatomic) MKHTTPHeaders *headers; // ivar: _headers


-(id)init;
-(id)responseData;


@end


#endif