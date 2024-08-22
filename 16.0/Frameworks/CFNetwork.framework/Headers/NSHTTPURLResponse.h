// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSHTTPURLRESPONSE_H
#define NSHTTPURLRESPONSE_H

@class NSDictionary;


#import "NSURLResponse.h"
#import "NSHTTPURLResponseInternal.h"

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal *_httpInternal;
}


@property (readonly, copy) NSDictionary *allHeaderFields;
@property (readonly) NSInteger statusCode;


+(BOOL)isErrorStatusCode:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)localizedStringForStatusCode:(NSInteger)arg0 ;
-(id)_allHTTPHeaderFieldsAsArrays;
-(id)_initWithCFURLResponse:(struct _CFURLResponse *)arg0 ;
-(id)_peerCertificateChain;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 statusCode:(NSInteger)arg1 HTTPVersion:(id)arg2 headerFields:(id)arg3 ;
-(id)initWithURL:(id)arg0 statusCode:(NSInteger)arg1 headerFields:(id)arg2 requestTime:(CGFloat)arg3 ;
-(id)valueForHTTPHeaderField:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif