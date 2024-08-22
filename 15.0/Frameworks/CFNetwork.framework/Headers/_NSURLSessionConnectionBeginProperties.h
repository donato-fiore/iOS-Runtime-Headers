// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSURLSESSIONCONNECTIONBEGINPROPERTIES_H
#define _NSURLSESSIONCONNECTIONBEGINPROPERTIES_H

@protocol NSSecureCoding, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "__CFN_ConnectionMetrics.h"

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding>

 {
    __CFN_ConnectionMetrics *__metrics;
}


@property (readonly, nonatomic, getter=isTLSConfigured) BOOL TLSConfigured;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif