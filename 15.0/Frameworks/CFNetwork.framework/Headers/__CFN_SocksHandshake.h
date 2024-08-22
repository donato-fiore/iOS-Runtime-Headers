// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CFN_SOCKSHANDSHAKE_H
#define __CFN_SOCKSHANDSHAKE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface __CFN_SocksHandshake : NSObject {
    BOOL _finished;
    unsigned short _port;
    NSString *_host;
    NSDictionary *_credentials;
}




-(BOOL)parse:(char *)arg0 len:(NSInteger)arg1 completion:(id)arg2 ;
-(id)finish:(int)arg0 ;


@end


#endif