// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDATAANALYTICSLOGITEMPROVIDER_H
#define HFDATAANALYTICSLOGITEMPROVIDER_H

@class NSMapTable, NAFuture, NSMutableSet;
@protocol NSCopying, HFMediaProfileContainer;


#import "HFItemProvider.h"

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying>



@property (readonly, nonatomic) NSMapTable *logEntryUniqueIdentifierToLogItemMap; // ivar: _logEntryUniqueIdentifierToLogItemMap
@property (retain, nonatomic) NAFuture *logFetchFuture; // ivar: _logFetchFuture
@property (readonly, nonatomic) NSMutableSet *logItems; // ivar: _logItems
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer


+(BOOL)prefersNonBlockingReloads;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif