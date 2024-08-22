// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLOUDSYNCOBSERVERSTATUS_H
#define HKCLOUDSYNCOBSERVERSTATUS_H

@class NSDate, NSError;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL accountSupportsSecureContainer; // ivar: _accountSupportsSecureContainer
@property (copy, nonatomic) NSDate *dataUploadRequestCompletionDate; // ivar: _dataUploadRequestCompletionDate
@property (copy, nonatomic) NSDate *dataUploadRequestStartDate; // ivar: _dataUploadRequestStartDate
@property (nonatomic) NSInteger dataUploadRequestStatus; // ivar: _dataUploadRequestStatus
@property (copy, nonatomic) NSError *errorRequiringUserAction; // ivar: _errorRequiringUserAction
@property (copy, nonatomic) NSDate *lastPullDate; // ivar: _lastPullDate
@property (copy, nonatomic) NSDate *lastPulledUpdateDate; // ivar: _lastPulledUpdateDate
@property (copy, nonatomic) NSDate *lastPushDate; // ivar: _lastPushDate
@property (copy, nonatomic) NSDate *restoreCompletionDate; // ivar: _restoreCompletionDate
@property (nonatomic) BOOL syncEnabled; // ivar: _syncEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSyncEnabled:(BOOL)arg0 accountSupportsSecureContainer:(BOOL)arg1 lastPullDate:(id)arg2 lastPushDate:(id)arg3 lastPulledUpdateDate:(id)arg4 restoreCompletionDate:(id)arg5 errorRequiringUserAction:(id)arg6 dataUploadRequestStatus:(NSInteger)arg7 dataUploadRequestStartDate:(id)arg8 dataUploadRequestCompletionDate:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif