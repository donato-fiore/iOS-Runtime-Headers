// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKHTTPREQUEST_H
#define MKHTTPREQUEST_H

@class NSMutableData, NSData, NSString;

#import <Foundation/Foundation.h>

#import "MKHTTPHeaders.h"
#import "MKHTTPParameters.h"

@interface MKHTTPRequest : NSObject

@property (retain, nonatomic) NSMutableData *body; // ivar: _body
@property (retain, nonatomic) NSData *chunk; // ivar: _chunk
@property (nonatomic) NSUInteger chunkOffset; // ivar: _chunkOffset
@property (retain, nonatomic) MKHTTPHeaders *headers; // ivar: _headers
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (retain, nonatomic) MKHTTPParameters *parameters; // ivar: _parameters


-(id)initWithHeaders:(id)arg0 body:(id)arg1 hostname:(id)arg2 ;
-(void)appendData:(id)arg0 ;
-(void)sliceData:(NSUInteger)arg0 ;


@end


#endif