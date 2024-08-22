// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKREQUEST_H
#define SBKREQUEST_H

@class NSURL, NSString, NSDictionary, NSData, ISDataProvider;

#import <Foundation/Foundation.h>

#import "SBKTransaction.h"

@interface SBKRequest : NSObject {
    NSURL *_requestURL;
    NSString *_action;
    NSInteger _bodyContentType;
    NSDictionary *_headers;
    NSDictionary *_arguments;
}


@property (retain, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (readonly, nonatomic, getter=isConcurrent) BOOL concurrent; // ivar: _concurrent
@property (nonatomic) BOOL includeDeviceGUID; // ivar: _includeDeviceGUID
@property (nonatomic) NSInteger method; // ivar: _method
@property (retain, nonatomic) ISDataProvider *responseDataProvider; // ivar: _responseDataProvider
@property (nonatomic) BOOL shouldAuthenticate; // ivar: _shouldAuthenticate
@property (readonly, nonatomic) CGFloat timeoutInterval;
@property (retain, nonatomic) SBKTransaction *transaction; // ivar: _transaction


+(NSInteger)bodyContentEncodingType;
+(NSInteger)bodyContentType;
+(id)_contentEncodingTypeStringForBodyContentEncodingType:(NSInteger)arg0 ;
+(id)_contentTypeStringForBodyContentType:(NSInteger)arg0 ;
+(id)_methodStringForMethod:(NSInteger)arg0 ;
+(id)requestWithRequestURL:(id)arg0 ;
-(BOOL)acceptsGzipEncoding;
-(id)_defaultHeaderFields;
-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)copyRequestProperties;
-(id)description;
-(id)descriptionWithoutHeaderFields;
-(id)initWithRequestURL:(id)arg0 ;
-(id)newURLOperation;
-(id)newURLOperationWithDelegate:(id)arg0 ;
-(void)setValue:(id)arg0 forArgument:(id)arg1 ;
-(void)setValue:(id)arg0 forHeaderField:(id)arg1 ;


@end


#endif