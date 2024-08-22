// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPHOENIXDATACOLLECTIONMANAGER_H
#define AXPHOENIXDATACOLLECTIONMANAGER_H

@class NSString;
@protocol AXPhoenixDataCollectionManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXPhoenixDataCollectionManager : NSObject

@property (weak, nonatomic) NSObject<AXPhoenixDataCollectionManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (nonatomic) NSInteger packagesRemaining; // ivar: _packagesRemaining
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSString *uploadErrorMessage; // ivar: _uploadErrorMessage


+(id)sharedInstance;
-(id)init;
-(void)removeOldData;
-(void)reportFalsePositive:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)timerTick;
-(void)updateUploadStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)uploadPackages;


@end


#endif