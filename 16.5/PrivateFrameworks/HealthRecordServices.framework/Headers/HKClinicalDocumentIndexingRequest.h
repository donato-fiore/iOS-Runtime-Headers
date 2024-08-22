// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALDOCUMENTINDEXINGREQUEST_H
#define HKCLINICALDOCUMENTINDEXINGREQUEST_H

@class NSArray, HKMedicalRecord;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalDocumentIndexingRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attachmentIdentifiers; // ivar: _attachmentIdentifiers
@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMedicalRecord:(id)arg0 attachmentIdentifiers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif