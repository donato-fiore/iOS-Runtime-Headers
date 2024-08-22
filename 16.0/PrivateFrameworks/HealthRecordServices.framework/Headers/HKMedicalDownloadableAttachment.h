// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALDOWNLOADABLEATTACHMENT_H
#define HKMEDICALDOWNLOADABLEATTACHMENT_H

@class NSUUID, NSString, NSDate, NSData, NSURL, NSError, NSLocale, NSDictionary, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicalDownloadableAttachment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSUUID *clinicalRecordIdentifier; // ivar: _clinicalRecordIdentifier
@property (readonly, copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSData *expectedHash; // ivar: _expectedHash
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSData *inlineData; // ivar: _inlineData
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
-(id)copyForAccountWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 medicalRecordIdentifier:(id)arg1 clinicalRecordIdentifier:(id)arg2 accountIdentifier:(id)arg3 type:(NSInteger)arg4 status:(NSInteger)arg5 title:(id)arg6 webURL:(id)arg7 sizeInBytes:(id)arg8 contentType:(id)arg9 locale:(id)arg10 expectedHash:(id)arg11 creationDate:(id)arg12 retryCount:(NSInteger)arg13 nextRetryDate:(id)arg14 lastUpdatedDate:(id)arg15 lastError:(id)arg16 fileURL:(id)arg17 inlineData:(id)arg18 metadata:(id)arg19 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif