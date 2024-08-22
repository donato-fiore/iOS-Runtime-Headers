// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HSRESPONSE_H
#define HSRESPONSE_H

@class NSString, NSError, NSData, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface HSResponse : NSObject

@property (readonly, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger responseCode; // ivar: _responseCode
@property (readonly, nonatomic) NSData *responseData; // ivar: _responseData
@property (copy, nonatomic) NSURL *responseDataFileURL; // ivar: _responseDataFileURL
@property (readonly, nonatomic) NSDictionary *responseHeaderFields; // ivar: _responseHeaderFields


+(id)responseWithCode:(NSUInteger)arg0 headerFields:(id)arg1 data:(id)arg2 MIMEType:(id)arg3 error:(id)arg4 ;
+(id)responseWithResponse:(id)arg0 ;
-(id)description;
-(id)initWithCode:(NSUInteger)arg0 headerFields:(id)arg1 data:(id)arg2 MIMEType:(id)arg3 error:(id)arg4 ;


@end


#endif