// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORDCHANGE_H
#define CKRECORDCHANGE_H

@class NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKRecord.h"
#import "CKRecordID.h"

@interface CKRecordChange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) CKRecord *record; // ivar: _record
@property (readonly, copy, nonatomic) CKRecordID *recordID; // ivar: _recordID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChangeType:(NSInteger)arg0 recordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif