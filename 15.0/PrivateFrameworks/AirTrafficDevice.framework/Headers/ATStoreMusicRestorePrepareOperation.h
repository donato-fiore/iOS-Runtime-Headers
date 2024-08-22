// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSTOREMUSICRESTOREPREPAREOPERATION_H
#define ATSTOREMUSICRESTOREPREPAREOPERATION_H

@class ICMusicRestoreRequest;


#import "ATStoreDownloadPrepareOperation.h"

@interface ATStoreMusicRestorePrepareOperation : ATStoreDownloadPrepareOperation {
    ICMusicRestoreRequest *_restoreRequest;
}




-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 operationResult:(id)arg1 ;


@end


#endif