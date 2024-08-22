// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNCHISTORY_H
#define _DKSYNCHISTORY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _DKSyncHistory : NSObject

@property (readonly, nonatomic) NSUInteger lastDaySyncCount; // ivar: _lastDaySyncCount
@property (readonly, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate


-(id)description;
-(id)init;
-(id)initWithLastSyncDate:(id)arg0 lastDaySyncCount:(NSUInteger)arg1 ;


@end


#endif