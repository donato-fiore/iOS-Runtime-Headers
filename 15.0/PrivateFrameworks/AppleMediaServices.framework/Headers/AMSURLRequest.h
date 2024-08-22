// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSURLREQUEST_H
#define AMSURLREQUEST_H

@class NSMutableURLRequest;
@protocol NSCopying, NSMutableCopying;


#import "AMSURLRequestProperties.h"

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>



@property (retain, nonatomic) AMSURLRequestProperties *properties; // ivar: _properties


-(id)_initWithCFURLRequest:(struct _CFURLRequest *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)initWithRequest:(id)arg0 properties:(id)arg1 ;
-(id)initWithURL:(id)arg0 cachePolicy:(NSUInteger)arg1 timeoutInterval:(CGFloat)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif