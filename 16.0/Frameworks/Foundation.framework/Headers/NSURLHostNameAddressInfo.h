// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSURLHOSTNAMEADDRESSINFO_H
#define NSURLHOSTNAMEADDRESSINFO_H


#import <Foundation/Foundation.h>


@interface NSURLHostNameAddressInfo : NSObject {
    CGFloat timestamp;
    *addrinfo addressInfo;
}




+(id)addressInfoForHost:(id)arg0 ;
+(void)asyncResolveWithCallbackClient:(id)arg0 ;
-(CGFloat)_timestamp;
-(id)_initWithAddressInfo:(struct addrinfo *)arg0 ;
-(struct addrinfo *)addrinfo;
-(void)dealloc;


@end


#endif