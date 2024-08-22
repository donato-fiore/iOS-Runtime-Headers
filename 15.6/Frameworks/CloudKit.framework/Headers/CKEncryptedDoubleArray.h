// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKENCRYPTEDDOUBLEARRAY_H
#define CKENCRYPTEDDOUBLEARRAY_H

@class NSString, NSArray;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedDoubleArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *doubleArray;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDoubleArray:(id)arg0 ;
-(id)value;


@end


#endif