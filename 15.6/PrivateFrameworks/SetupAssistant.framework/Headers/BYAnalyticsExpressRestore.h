// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYANALYTICSEXPRESSRESTORE_H
#define BYANALYTICSEXPRESSRESTORE_H


#import <Foundation/Foundation.h>


@interface BYAnalyticsExpressRestore : NSObject

@property (nonatomic) BOOL offeredBackup; // ivar: _offeredBackup
@property (nonatomic) BOOL paneShown; // ivar: _paneShown
@property (nonatomic) NSUInteger restoreChoice; // ivar: _restoreChoice


+(id)sharedInstance;
-(id)eventPayload;
-(id)init;


@end


#endif