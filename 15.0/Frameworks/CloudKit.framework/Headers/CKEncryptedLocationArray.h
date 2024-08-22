// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKENCRYPTEDLOCATIONARRAY_H
#define CKENCRYPTEDLOCATIONARRAY_H

@class NSString, NSArray;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedLocationArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *locationArray;
@property (readonly) Class superclass;


-(id)initWithLocationArray:(id)arg0 ;
-(id)value;


@end


#endif