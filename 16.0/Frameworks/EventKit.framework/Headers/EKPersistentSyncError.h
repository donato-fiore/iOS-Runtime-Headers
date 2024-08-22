// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTSYNCERROR_H
#define EKPERSISTENTSYNCERROR_H



#import "EKPersistentObject.h"

@interface EKPersistentSyncError : EKPersistentObject



+(Class)meltedClass;
+(id)relations;
-(id)userInfoData;
-(int)entityType;
-(int)errorCode;
-(int)errorType;
-(void)setErrorCode:(int)arg0 ;
-(void)setErrorType:(int)arg0 ;
-(void)setUserInfoData:(id)arg0 ;


@end


#endif