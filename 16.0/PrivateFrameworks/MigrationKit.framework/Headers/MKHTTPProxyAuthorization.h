// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKHTTPPROXYAUTHORIZATION_H
#define MKHTTPPROXYAUTHORIZATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKHTTPProxyAuthorization : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *signature; // ivar: _signature


-(id)initWithHeaderValue:(id)arg0 ;


@end


#endif