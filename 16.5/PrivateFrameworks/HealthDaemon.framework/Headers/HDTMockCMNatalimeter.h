// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDTMOCKCMNATALIMETER_H
#define HDTMOCKCMNATALIMETER_H

@class CMNatalimeter;



@interface HDTMockCMNatalimeter : CMNatalimeter

@property (copy, nonatomic) id *handleQueryDataSinceRecord; // ivar: _handleQueryDataSinceRecord
@property (copy, nonatomic) id *handleStartNatalimetryUpdates; // ivar: _handleStartNatalimetryUpdates
@property (copy, nonatomic) id *handleStopNatalimeteryUpdates; // ivar: _handleStopNatalimeteryUpdates


-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg0 withHandler:(id)arg1 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id)arg0 ;
-(void)stopAbsoluteNatalimetryDataUpdates;


@end


#endif