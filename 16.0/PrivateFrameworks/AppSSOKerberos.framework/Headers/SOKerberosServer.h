// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOKERBEROSSERVER_H
#define SOKERBEROSSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SOKerberosServer : NSObject

@property (readonly) NSString *host; // ivar: _host
@property (readonly) NSString *path; // ivar: _path
@property (readonly) NSString *port; // ivar: _port
@property (readonly) NSString *protocol; // ivar: _protocol


+(id)serverWithString:(id)arg0 ;
-(id)initWithHost:(id)arg0 port:(id)arg1 protocol:(id)arg2 path:(id)arg3 ;


@end


#endif