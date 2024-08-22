// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSREGIONITEMCACHECREATOR_H
#define CLSREGIONITEMCACHECREATOR_H

@class NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CLSRegionItemCacheCreator : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (nonatomic) NSUInteger numberOfRetries; // ivar: _numberOfRetries
@property (readonly, nonatomic) NSArray *queryPerformers; // ivar: _queryPerformers
@property (nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout; // ivar: _simulatesTimeout
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(id)businessItemsForRegion:(id)arg0 ;
// -(BOOL)createCacheForRegions:(id)arg0 progressBlock:(id)arg1 error:(unk)arg2  ;
-(id)initWithQueryPerformers:(id)arg0 ;


@end


#endif