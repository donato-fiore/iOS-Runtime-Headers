// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHUPDATEHEALTHRECORDER_H
#define PGGRAPHUPDATEHEALTHRECORDER_H

@class CPAnalytics, NSString;
@protocol PGGraphUpdateHealthRecording;

#import <Foundation/Foundation.h>


@interface PGGraphUpdateHealthRecorder : NSObject <PGGraphUpdateHealthRecording>

 {
    CPAnalytics *_analytics;
}


@property (readonly, nonatomic, getter=isChangeConsumer) BOOL changeConsumer; // ivar: _changeConsumer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumTransactionSize; // ivar: _maximumTransactionSize
@property (readonly, nonatomic) NSUInteger numberOfDatabaseChangesConvertedToGraphChangesInBackground; // ivar: _numberOfDatabaseChangesConvertedToGraphChangesInBackground
@property (readonly, nonatomic) NSUInteger numberOfDatabaseChangesConvertedToGraphChangesInForeground; // ivar: _numberOfDatabaseChangesConvertedToGraphChangesInForeground
@property (readonly, nonatomic) NSUInteger numberOfDatabaseChangesReceivedInBackground; // ivar: _numberOfDatabaseChangesReceivedInBackground
@property (readonly, nonatomic) NSUInteger numberOfDatabaseChangesReceivedInForeground; // ivar: _numberOfDatabaseChangesReceivedInForeground
@property (readonly, nonatomic) NSUInteger numberOfTimesGraphUpdatePaused; // ivar: _numberOfTimesGraphUpdatePaused
@property (readonly) Class superclass;


-(id)initForChangeConsumer:(BOOL)arg0 analytics:(id)arg1 ;
-(void)beginRecording;
-(void)endRecordingInBackground:(BOOL)arg0 ;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(NSUInteger)arg0 inBackground:(BOOL)arg1 ;
-(void)recordNumberOfDatabaseChangesReceived:(NSUInteger)arg0 inBackground:(BOOL)arg1 ;
-(void)recordNumberOfDaysSinceMajorOSUpgrade:(NSUInteger)arg0 ;
-(void)recordNumberOfTimesGraphUpdatePaused:(NSUInteger)arg0 ;
-(void)recordTransactionSize:(NSUInteger)arg0 ;


@end


#endif