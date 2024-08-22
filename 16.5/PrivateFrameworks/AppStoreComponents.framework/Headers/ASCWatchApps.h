// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCWATCHAPPS_H
#define ASCWATCHAPPS_H


#import <Foundation/Foundation.h>

#import "ASCAppOfferStateCenter.h"

@interface ASCWatchApps : NSObject

@property (readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter; // ivar: _appOfferStateCenter


+(id)sharedWatchApps;
-(id)initWithAppOfferStateCenter:(id)arg0 ;
-(id)reinstallAppWithID:(id)arg0 ;
-(id)reinstallSystemAppWithBundleID:(id)arg0 ;


@end


#endif