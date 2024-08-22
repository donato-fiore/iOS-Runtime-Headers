// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHNOTIFICATIONCHANGESOPERATIONINFO_H
#define CKFETCHNOTIFICATIONCHANGESOPERATIONINFO_H

@protocol NSSecureCoding;


#import "CKOperationInfo.h"
#import "CKServerChangeToken.h"

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding>



@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (nonatomic) BOOL wantsChanges; // ivar: _wantsChanges


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif