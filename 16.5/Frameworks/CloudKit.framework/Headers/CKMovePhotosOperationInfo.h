// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMOVEPHOTOSOPERATIONINFO_H
#define CKMOVEPHOTOSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKModifyRecordsOperationInfo.h"

@interface CKMovePhotosOperationInfo : CKModifyRecordsOperationInfo <NSSecureCoding>



@property (copy, nonatomic) NSArray *moveChanges; // ivar: _moveChanges
@property (nonatomic) NSInteger sourceDatabaseScope; // ivar: _sourceDatabaseScope


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif