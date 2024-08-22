// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKENCRYPTEDREFERENCE_H
#define CKENCRYPTEDREFERENCE_H

@class NSString;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"
#import "CKReference.h"

@interface CKEncryptedReference : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKReference *reference;
@property (readonly) Class superclass;


-(id)_pReferenceFromReference:(id)arg0 ;
-(id)_recordIDFromPRecordIdentifier:(id)arg0 ;
-(id)_referenceFromPReference:(id)arg0 ;
-(id)initWithReference:(id)arg0 ;
-(id)value;


@end


#endif