// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAREMOTESERVERCONFIGURATIONCACHE_H
#define AAREMOTESERVERCONFIGURATIONCACHE_H

@class NSDate, NSHTTPURLResponse;

#import <Foundation/Foundation.h>

#import "AAURLConfiguration.h"

@interface AARemoteServerConfigurationCache : NSObject

@property (readonly, nonatomic) AAURLConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSHTTPURLResponse *response; // ivar: _response


+(id)cacheWithConfiguration:(id)arg0 response:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 response:(id)arg1 ;


@end


#endif