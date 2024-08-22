// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIATTRIBUTE_H
#define DIATTRIBUTE_H

@class NSString, NSData;
@protocol NSSecureCoding, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface DIAttribute : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger attributeType; // ivar: _attributeType
@property (copy, nonatomic) NSString *clientValidationRegex; // ivar: _clientValidationRegex
@property (copy, nonatomic) NSString *codeOnError; // ivar: _codeOnError
@property (copy, nonatomic, getter=getCurrentValue) NSObject<NSObject><NSCopying> *currentValue; // ivar: _currentValue
@property (nonatomic) BOOL dataNodeProof; // ivar: _dataNodeProof
@property (copy, nonatomic) NSString *dataNodeProofGroup; // ivar: _dataNodeProofGroup
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) NSString *displayFormat; // ivar: _displayFormat
@property (copy, nonatomic) NSString *group; // ivar: _group
@property (nonatomic) BOOL hasLabel; // ivar: _hasLabel
@property (nonatomic) BOOL holdLocally; // ivar: _holdLocally
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL incorrect; // ivar: _incorrect
@property (nonatomic) BOOL isSensitive; // ivar: _isSensitive
@property (copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (copy, nonatomic) NSString *localizedPlaceholder; // ivar: _localizedPlaceholder
@property (nonatomic) BOOL notForVerification; // ivar: _notForVerification
@property (nonatomic) BOOL optional; // ivar: _optional
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSString *serverValidationURL; // ivar: _serverValidationURL
@property (copy, nonatomic) NSString *submissionFormat; // ivar: _submissionFormat
@property (copy, nonatomic) NSString *submissionKey; // ivar: _submissionKey
@property (copy, nonatomic) NSData *submissionValue; // ivar: _submissionValue
@property (copy, nonatomic) NSString *supportingData; // ivar: _supportingData


+(BOOL)supportsSecureCoding;
-(BOOL)isAttributeTypeCamera;
-(BOOL)isAttributeTypeCustom;
-(BOOL)isAttributeTypeDate;
-(BOOL)isAttributeTypeDocument;
-(BOOL)isAttributeTypeFooter;
-(BOOL)isAttributeTypeLabel;
-(BOOL)isAttributeTypePicker;
-(BOOL)isAttributeTypeSMSOTP;
-(BOOL)isAttributeTypeSecureCamera;
-(BOOL)isAttributeTypeText;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)submissionString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif