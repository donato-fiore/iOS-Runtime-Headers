// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKENCRYPTEDDATEARRAY_H
#define CKENCRYPTEDDATEARRAY_H

@class NSArray, NSString;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedDateArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *dateArray;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDateArray:(id)arg0 ;
-(id)value;


@end


#endif