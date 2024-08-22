// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKCOMPANIONSECURERANGINGCOORDINATOR_H
#define NPKCOMPANIONSECURERANGINGCOORDINATOR_H

@class NSDistributedNotificationCenter;
@protocol NPKCompanionSecureRangingCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface NPKCompanionSecureRangingCoordinator : NSObject {
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}


@property (weak, nonatomic) NSObject<NPKCompanionSecureRangingCoordinatorDelegate> *delegate; // ivar: _delegate


-(id)initWithDistributedNotificationCenter:(id)arg0 ;
-(void)_handleCarKeyRangingEndedNotification:(id)arg0 ;
-(void)_handleCarKeyRangingStartedNotification:(id)arg0 ;
-(void)_parseRangingEndedNotificationObject:(id)arg0 outApplicationIdentifier:(*id)arg1 outApplicationKeyIdentifier:(*id)arg2 outPairedReaderIdentifier:(*id)arg3 ;
-(void)_parseRangingStartedNotificationObject:(id)arg0 outApplicationIdentifier:(*id)arg1 outApplicationKeyIdentifier:(*id)arg2 outPairedReaderIdentifier:(*id)arg3 outRangingTimeoutInSeconds:(*id)arg4 ;
-(void)_registerObservers;


@end


#endif