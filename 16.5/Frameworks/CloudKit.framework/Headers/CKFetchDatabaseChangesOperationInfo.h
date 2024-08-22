// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHDATABASECHANGESOPERATIONINFO_H
#define CKFETCHDATABASECHANGESOPERATIONINFO_H

@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"
#import "CKServerChangeToken.h"

@interface CKFetchDatabaseChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif