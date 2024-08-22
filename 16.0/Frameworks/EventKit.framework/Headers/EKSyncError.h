// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSYNCERROR_H
#define EKSYNCERROR_H

@class NSDictionary;


#import "EKObject.h"

@interface EKSyncError : EKObject

@property (readonly, nonatomic) NSUInteger errorCode;
@property (readonly, nonatomic) NSUInteger errorType;
@property (readonly, nonatomic) NSDictionary *userInfo;


+(Class)frozenClass;
+(id)augmentSyncErrorUserInfo:(id)arg0 for:(id)arg1 ;
+(id)knownIdentityKeysForComparison;
-(id)initWithAccountError:(NSUInteger)arg0 userInfo:(id)arg1 ;
-(id)initWithCalendarError:(NSUInteger)arg0 userInfo:(id)arg1 ;
-(id)initWithCalendarItemError:(NSUInteger)arg0 userInfo:(id)arg1 ;


@end


#endif