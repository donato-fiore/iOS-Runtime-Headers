// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCOMPANIONSYNCINCOMINGSESSION_H
#define VCCOMPANIONSYNCINCOMINGSESSION_H



#import "VCCompanionSyncSession.h"

@interface VCCompanionSyncIncomingSession : VCCompanionSyncSession



+(NSInteger)direction;
-(void)resetDataStoreForSyncSession:(id)arg0 completion:(id)arg1 ;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;


@end


#endif