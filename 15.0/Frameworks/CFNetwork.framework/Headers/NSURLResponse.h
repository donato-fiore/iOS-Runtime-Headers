// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLRESPONSE_H
#define NSURLRESPONSE_H

@class NSString, NSURL, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSURLResponseInternal.h"

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying>

 {
    NSURLResponseInternal *_internal;
}


@property (readonly, copy) NSString *MIMEType;
@property (readonly, copy) NSURL *URL;
@property *URLResponse _cf_resp_data; // ivar: __cf_resp_data
@property (readonly, copy) NSDictionary *allHeaderFields;
@property (readonly) NSInteger expectedContentLength;
@property (readonly) NSInteger statusCode;
@property (readonly, copy) NSString *suggestedFilename;
@property (readonly, copy) NSString *textEncodingName;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_responseWithCFURLResponse:(struct _CFURLResponse *)arg0 ;
-(?)_inner;
-(BOOL)_mustRevalidate;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)_calculatedExpiration;
-(CGFloat)_freshnessLifetime;
-(id)_initWithCFURLResponse:(struct _CFURLResponse *)arg0 ;
-(id)_initWithInternal:(id)arg0 ;
-(id)_lastModifiedDate;
-(id)_peerCertificateChain;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 MIMEType:(id)arg1 expectedContentLength:(NSInteger)arg2 textEncodingName:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif