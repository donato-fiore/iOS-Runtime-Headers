// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKBACKUPPROVIDER_H
#define DKBACKUPPROVIDER_H

@class ACAccount, MBManager;
@protocol MBManagerDelegate;

#import <Foundation/Foundation.h>


@interface DKBackupProvider : NSObject <MBManagerDelegate>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) MBManager *manager; // ivar: _manager
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(BOOL)isBackingUp;
-(BOOL)isBackupEnabled;
-(BOOL)isManualBackupOnCellularAllowed;
-(BOOL)isRestoring;
-(id)initWithAccount:(id)arg0 ;
-(void)cancel;
-(void)manager:(id)arg0 didFailBackupWithError:(id)arg1 ;
-(void)manager:(id)arg0 didUpdateProgress:(float)arg1 estimatedTimeRemaining:(NSUInteger)arg2 ;
-(void)managerDidFinishBackup:(id)arg0 ;
-(void)managerDidLoseConnectionToService:(id)arg0 ;
// -(void)startBackupWithExpensiveCellularAllowed:(BOOL)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif