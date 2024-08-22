// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDOWNLOADSTORAGEUSAGEMONITORENTRY_H
#define SFDOWNLOADSTORAGEUSAGEMONITORENTRY_H

@class NSString, NSUUID, NSProgress, NSData;
@protocol SFDownloadStorageUsageMonitorEntryDelegate;

#import <Foundation/Foundation.h>


@interface SFDownloadStorageUsageMonitorEntry : NSObject

@property (nonatomic) NSInteger cachedUsage; // ivar: _cachedUsage
@property (weak, nonatomic) NSObject<SFDownloadStorageUsageMonitorEntryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *destinationPath; // ivar: _destinationPath
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) NSData *progressData; // ivar: _progressData
@property (retain, nonatomic) id *progressSubscriber; // ivar: _progressSubscriber


-(id)initWithIdentifier:(id)arg0 ;
-(void)_didGainProgress:(id)arg0 ;
-(void)_didLoseProgress:(id)arg0 ;
-(void)_updateProgressSubscriptionWithData:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateWithDictionaryRepresentation:(id)arg0 ;


@end


#endif