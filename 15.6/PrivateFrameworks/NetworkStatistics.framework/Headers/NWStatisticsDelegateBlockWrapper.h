// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWSTATISTICSDELEGATEBLOCKWRAPPER_H
#define NWSTATISTICSDELEGATEBLOCKWRAPPER_H

@class NSString;
@protocol NWStatisticsSourceDelegate, NWStatisticsManagerDelegate;

#import <Foundation/Foundation.h>


@interface NWStatisticsDelegateBlockWrapper : NSObject <NWStatisticsSourceDelegate, NWStatisticsManagerDelegate>



@property (copy) id *addedBlock; // ivar: _addedBlock
@property (copy) id *countsBlock; // ivar: _countsBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *descriptionBlock; // ivar: _descriptionBlock
@property (copy) id *eventsBlock; // ivar: _eventsBlock
@property (readonly) NSUInteger hash;
@property (copy) id *removedBlock; // ivar: _removedBlock
@property (readonly) Class superclass;


-(void)sourceDidReceiveCounts:(id)arg0 ;
-(void)sourceDidReceiveDescription:(id)arg0 ;
-(void)statisticsManager:(id)arg0 didAddSource:(id)arg1 ;
-(void)statisticsManager:(id)arg0 didRemoveSource:(id)arg1 ;


@end


#endif