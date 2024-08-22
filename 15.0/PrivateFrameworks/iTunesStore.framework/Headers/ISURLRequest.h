// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISURLREQUEST_H
#define ISURLREQUEST_H

@class NSLock, SSMutableURLRequestProperties, NSData, NSInputStream, NSString, NSArray, NSDictionary, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ISURLRequest : NSObject <NSSecureCoding, NSCopying>

 {
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}


@property (retain) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (retain) NSString *HTTPMethod;
@property NSInteger URLBagType;
@property (retain) NSArray *URLs;
@property NSInteger allowedRetryCount;
@property (retain) NSString *appleClientApplication;
@property NSUInteger cachePolicy;
@property (retain) NSDictionary *customHeaders;
@property NSInteger expectedContentLength;
@property (readonly) NSURL *primaryURL;
@property (retain) NSDictionary *queryStringDictionary;
@property CGFloat timeoutInterval;


+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initCommon;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestProperties:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 ;
-(id)requestProperties;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forHeaderField:(id)arg1 ;
-(void)setValue:(id)arg0 forQueryStringParameter:(id)arg1 ;


@end


#endif