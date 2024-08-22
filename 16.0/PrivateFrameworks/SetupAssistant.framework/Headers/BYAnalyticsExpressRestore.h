// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYANALYTICSEXPRESSRESTORE_H
#define BYANALYTICSEXPRESSRESTORE_H


#import <Foundation/Foundation.h>


@interface BYAnalyticsExpressRestore : NSObject

@property (nonatomic) BOOL offeredBackup; // ivar: _offeredBackup
@property (nonatomic) BOOL paneShown; // ivar: _paneShown
@property (nonatomic) NSUInteger restoreChoice; // ivar: _restoreChoice


-(id)eventPayload;
-(id)initWithAnalyticsManager:(id)arg0 ;


@end


#endif