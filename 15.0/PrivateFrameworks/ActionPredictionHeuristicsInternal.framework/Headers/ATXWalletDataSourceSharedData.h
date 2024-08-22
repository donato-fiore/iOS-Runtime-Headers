// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXWALLETDATASOURCESHAREDDATA_H
#define ATXWALLETDATASOURCESHAREDDATA_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}




+(id)sharedInstance;
-(BOOL)hasEmptyWalletPasses;
-(id)init;
-(void)_passesDidChange;
-(void)setHasEmptyWalletPasses:(BOOL)arg0 ;


@end


#endif