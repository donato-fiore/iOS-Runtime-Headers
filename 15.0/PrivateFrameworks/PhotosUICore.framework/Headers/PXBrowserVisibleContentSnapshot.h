// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXBROWSERVISIBLECONTENTSNAPSHOT_H
#define PXBROWSERVISIBLECONTENTSNAPSHOT_H

@class NSDateInterval, NSString, NSArray;
@protocol PXBrowserVisibleContentSnapshot;

#import <Foundation/Foundation.h>


@interface PXBrowserVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot>



@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSUInteger dateIntervalGranularity; // ivar: _dateIntervalGranularity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedPlaceholderText;
@property (readonly, nonatomic) NSArray *locationNames; // ivar: _locationNames
@property (readonly) Class superclass;


+(id)snapshotWithIndexPaths:(id)arg0 dataSource:(id)arg1 dateIntervalGranularity:(NSUInteger)arg2 ;
+(id)snapshotWithIndexPaths:(id)arg0 dataSource:(id)arg1 dateIntervalGranularity:(NSUInteger)arg2 dateType:(NSUInteger)arg3 ;
-(id)init;
-(id)initWithDateIntervalGranularity:(NSUInteger)arg0 ;


@end


#endif