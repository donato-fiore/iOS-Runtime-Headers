// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKENCRYPTEDDOUBLE_H
#define CKENCRYPTEDDOUBLE_H

@class NSString;
@protocol CKRecordValue, NSCopying, NSSecureCoding;


#import "CKEncryptedData.h"

@interface CKEncryptedDouble : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat ckDoubleValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDouble:(CGFloat)arg0 ;
-(id)value;


@end


#endif