// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPEVENTNAMERECORDLOADINGDELEGATE_H
#define PPEVENTNAMERECORDLOADINGDELEGATE_H



#import "PPRecordLoadingDelegate.h"

@interface PPEventNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id *eventNameRecordsCompletion; // ivar: _eventNameRecordsCompletion
@property (copy, nonatomic) id *eventNameRecordsHandler; // ivar: _eventNameRecordsHandler
@property (copy, nonatomic) id *eventNameRecordsSetup; // ivar: _eventNameRecordsSetup
@property (copy, nonatomic) id *recentEventNameRecordsCompletion; // ivar: _recentEventNameRecordsCompletion
@property (copy, nonatomic) id *recentEventNameRecordsHandler; // ivar: _recentEventNameRecordsHandler
@property (copy, nonatomic) id *recentEventNameRecordsSetup; // ivar: _recentEventNameRecordsSetup
@property (copy, nonatomic) id *resetEventNameRecordData; // ivar: _resetEventNameRecordData


-(id)description;
-(id)initWithName:(id)arg0 ;
-(unsigned char)recentRecordLoadingHandler:(id)arg0 ;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg0 ;
-(unsigned char)recordLoadingSetup;
-(void)recentRecordLoadingCompletion;
-(void)recordLoadingCompletion;
-(void)resetRecordData;


@end


#endif