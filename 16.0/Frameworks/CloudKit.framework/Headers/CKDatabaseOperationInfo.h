// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDATABASEOPERATIONINFO_H
#define CKDATABASEOPERATIONINFO_H

@protocol NSSecureCoding;


#import "CKOperationInfo.h"

@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding>



@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope


+(BOOL)supportsSecureCoding;
-(id)activityCreate;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)takeValuesFrom:(id)arg0 ;


@end


#endif