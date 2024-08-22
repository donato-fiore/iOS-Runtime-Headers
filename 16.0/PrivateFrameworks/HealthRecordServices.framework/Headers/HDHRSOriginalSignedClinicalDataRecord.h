// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRSORIGINALSIGNEDCLINICALDATARECORD_H
#define HDHRSORIGINALSIGNEDCLINICALDATARECORD_H

@class NSArray, NSString, NSDictionary, NSData, NSDate, NSTimeZone, NSURL, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSOriginalSignedClinicalDataRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *credentialTypes; // ivar: _credentialTypes
@property (readonly, copy, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSData *rawContent; // ivar: _rawContent
@property (readonly, copy, nonatomic) NSDate *receivedDate; // ivar: _receivedDate
@property (readonly, copy, nonatomic) NSTimeZone *receivedDateTimeZone; // ivar: _receivedDateTimeZone
@property (readonly, nonatomic) NSInteger signatureStatus; // ivar: _signatureStatus
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (readonly, copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly, copy, nonatomic) NSUUID *syncIdentifier; // ivar: _syncIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawContent:(id)arg0 sourceType:(NSInteger)arg1 sourceURL:(id)arg2 issuerIdentifier:(id)arg3 credentialTypes:(id)arg4 syncIdentifier:(id)arg5 metadata:(id)arg6 receivedDate:(id)arg7 receivedDateTimeZone:(id)arg8 signatureStatus:(NSInteger)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif