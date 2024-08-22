// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSREQUEST_H
#define HSREQUEST_H

@class NSDictionary, NSString, NSData;

#import <Foundation/Foundation.h>


@interface HSRequest : NSObject {
    NSDictionary *_arguments;
}


@property (readonly, nonatomic) BOOL acceptsGzipEncoding;
@property (readonly, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (readonly, nonatomic, getter=isConcurrent) BOOL concurrent; // ivar: _concurrent
@property (nonatomic) NSInteger method; // ivar: _method
@property (readonly, nonatomic) CGFloat timeoutInterval;


+(id)request;
-(id)URLRequestForBaseURL:(id)arg0 sessionID:(unsigned int)arg1 ;
-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 ;
-(id)requestURLForBaseURL:(id)arg0 sessionID:(unsigned int)arg1 ;
-(void)setValue:(id)arg0 forArgument:(id)arg1 ;


@end


#endif