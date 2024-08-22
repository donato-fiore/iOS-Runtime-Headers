// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SODNSSRVRESPONSE_H
#define SODNSSRVRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SODNSSRVResponse : NSObject

@property (retain, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) unsigned short port; // ivar: _port


-(id)description;
-(id)init;


@end


#endif