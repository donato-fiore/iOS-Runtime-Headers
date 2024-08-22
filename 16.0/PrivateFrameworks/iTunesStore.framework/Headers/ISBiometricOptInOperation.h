// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISBIOMETRICOPTINOPERATION_H
#define ISBIOMETRICOPTINOPERATION_H

@class NSString;
@protocol OS_dispatch_queue;


#import "ISOperation.h"
#import "ISURLBag.h"

@interface ISBiometricOptInOperation : ISOperation {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _promptUser;
    id *_resultBlock;
    ISURLBag *_urlBag;
}


@property BOOL promptUser;
@property (copy) id *resultBlock;
@property (copy) NSString *topicName; // ivar: _topicName
@property (copy) NSString *userAgent; // ivar: _userAgent


-(BOOL)_performOptInDialogOperationWithError:(*id)arg0 ;
-(BOOL)_performPasscodeDialogOperationWithError:(*id)arg0 ;
-(id)_newSourceByStartingTimeoutTimer;
-(id)init;
-(void)_loadURLBag;
-(void)_performOptInDialogMetricsWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_updateTouchIDSettingsForAccount:(id)arg0 ;
-(void)run;


@end


#endif