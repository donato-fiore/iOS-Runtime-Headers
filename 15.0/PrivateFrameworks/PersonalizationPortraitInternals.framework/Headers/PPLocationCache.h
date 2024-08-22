// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPLOCATIONCACHE_H
#define PPLOCATIONCACHE_H

@class PPLocation, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PPLocalLocationStore.h"

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}




-(id)homeOrWorkAddresses;
-(id)init;
-(id)initWithLocationStore:(id)arg0 ;
-(id)locationForHome;
-(id)locationForWork;
-(void)_refresh;
-(void)invalidate;


@end


#endif