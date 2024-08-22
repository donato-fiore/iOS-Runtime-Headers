// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSYNCSCHEDULINGAUTHORITY_H
#define AVTSYNCSCHEDULINGAUTHORITY_H

@protocol AVTSyncSchedulingAuthority, AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>



@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger


-(BOOL)exportRequired;
-(BOOL)importRequired;
-(id)initWithLogger:(id)arg0 ;
-(void)didReceivePushNotification;
-(void)didResetSync;
-(void)exportDidCompleteSuccessfully;
-(void)importDidCompleteSuccessfully;
-(void)madeLocalChanges;


@end


#endif