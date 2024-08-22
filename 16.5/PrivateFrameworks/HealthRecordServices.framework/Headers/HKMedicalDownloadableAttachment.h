// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICALDOWNLOADABLEATTACHMENT_H
#define HKMEDICALDOWNLOADABLEATTACHMENT_H

@class HKFHIRVersion, NSUUID, NSString, NSDate, NSData, NSURL, NSError, NSLocale, NSDictionary, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicalDownloadableAttachment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion; // ivar: _FHIRVersion
@property (readonly, copy, nonatomic) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSUUID *attachmentIdentifier; // ivar: _attachmentIdentifier
@property (readonly, copy, nonatomic) NSUUID *clinicalRecordIdentifier; // ivar: _clinicalRecordIdentifier
@property (readonly, copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSInteger errorStatus; // ivar: _errorStatus
@property (readonly, copy, nonatomic) NSData *expectedHash; // ivar: _expectedHash
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSData *inlineData; // ivar: _inlineData
@property (readonly, copy, nonatomic) NSData *inlineDataChecksum; // ivar: _inlineDataChecksum
@property (readonly, copy, nonatomic) NSError *lastError; // ivar: _lastError
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSUUID *medicalRecordIdentifier; // ivar: _medicalRecordIdentifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSDate *nextRetryDate; // ivar: _nextRetryDate
@property (readonly, nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (readonly, copy, nonatomic) NSNumber *sizeInBytes; // ivar: _sizeInBytes
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSURL *webURL; // ivar: _webURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyForAccountWithIdentifier:(id)arg0 medicalRecordIdentifier:(id)arg1 clinicalRecordIdentifier:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 medicalRecordIdentifier:(id)arg1 clinicalRecordIdentifier:(id)arg2 accountIdentifier:(id)arg3 FHIRVersion:(id)arg4 type:(NSInteger)arg5 status:(NSInteger)arg6 errorStatus:(NSInteger)arg7 title:(id)arg8 webURL:(id)arg9 sizeInBytes:(id)arg10 contentType:(id)arg11 locale:(id)arg12 expectedHash:(id)arg13 creationDate:(id)arg14 retryCount:(NSInteger)arg15 nextRetryDate:(id)arg16 lastUpdatedDate:(id)arg17 lastError:(id)arg18 fileURL:(id)arg19 inlineData:(id)arg20 inlineDataChecksum:(id)arg21 attachmentIdentifier:(id)arg22 metadata:(id)arg23 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif