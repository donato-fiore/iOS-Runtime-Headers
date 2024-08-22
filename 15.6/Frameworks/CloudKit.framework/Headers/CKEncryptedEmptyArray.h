// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKENCRYPTEDEMPTYARRAY_H
#define CKENCRYPTEDEMPTYARRAY_H

@class NSString;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedEmptyArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)value;


@end


#endif