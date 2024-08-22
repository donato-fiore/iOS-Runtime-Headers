// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKENCRYPTEDSTRINGARRAY_H
#define CKENCRYPTEDSTRINGARRAY_H

@class NSString, NSArray;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedStringArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *stringArray;
@property (readonly) Class superclass;


-(id)initWithStringArray:(id)arg0 ;
-(id)value;


@end


#endif