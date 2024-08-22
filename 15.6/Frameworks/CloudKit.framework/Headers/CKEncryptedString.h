// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKENCRYPTEDSTRING_H
#define CKENCRYPTEDSTRING_H

@class NSString;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedString : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *string;
@property (readonly) Class superclass;


-(id)initWithString:(id)arg0 ;
-(id)value;


@end


#endif