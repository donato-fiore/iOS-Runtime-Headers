// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKENCRYPTEDLONGLONGARRAY_H
#define CKENCRYPTEDLONGLONGARRAY_H

@class NSString, NSArray;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedLongLongArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *longLongArray;
@property (readonly) Class superclass;


-(id)initWithLongLongArray:(id)arg0 ;
-(id)value;


@end


#endif