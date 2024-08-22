// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDEXTRACTIONRESULTITEMUNIT_H
#define HDEXTRACTIONRESULTITEMUNIT_H

@class HKClinicalRecord, NSArray, HKMedicalRecord;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDExtractionResultItemUnit : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKClinicalRecord *clinicalRecord; // ivar: _clinicalRecord
@property (readonly, copy, nonatomic) NSArray *downloadableAttachments; // ivar: _downloadableAttachments
@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMedicalRecord:(id)arg0 clinicalRecord:(id)arg1 downloadableAttachments:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif