// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALDOCUMENTSPOTLIGHTSEARCHRESULT_H
#define HKCLINICALDOCUMENTSPOTLIGHTSEARCHRESULT_H

@class NSUUID, HKMedicalRecord, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalDocumentSpotlightSearchResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *attachmentUUID; // ivar: _attachmentUUID
@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (readonly, copy, nonatomic) NSString *previewString; // ivar: _previewString
@property (readonly, copy, nonatomic) NSArray *previewStringMatchRanges; // ivar: _previewStringMatchRanges
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 medicalRecord:(id)arg1 attachmentUUID:(id)arg2 previewString:(id)arg3 previewStringMatchRanges:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif