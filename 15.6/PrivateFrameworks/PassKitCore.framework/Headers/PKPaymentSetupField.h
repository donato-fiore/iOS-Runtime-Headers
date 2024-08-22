// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPFIELD_H
#define PKPAYMENTSETUPFIELD_H

@class DIAttribute, NSString, NSDictionary;
@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupField : NSObject

@property (retain, nonatomic) DIAttribute *attribute; // ivar: _attribute
@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *currentValue; // ivar: _currentValue
@property (nonatomic, getter=isCurrentValueFromCameraCapture) BOOL currentValueFromCameraCapture; // ivar: _currentValueFromCameraCapture
@property (copy, nonatomic) NSString *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) NSString *displayFormat; // ivar: _displayFormat
@property (readonly, nonatomic) NSUInteger fieldType;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (copy, nonatomic) NSString *localizedPlaceholder; // ivar: _localizedPlaceholder
@property (readonly, copy, nonatomic) NSString *odiAttribute; // ivar: _odiAttribute
@property (nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *originalCameraCaptureValue; // ivar: _originalCameraCaptureValue
@property (nonatomic) BOOL populateFromMeCard; // ivar: _populateFromMeCard
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary; // ivar: _rawConfigurationDictionary
@property (nonatomic, getter=isReadonly) BOOL readonly; // ivar: _readonly
@property (nonatomic) BOOL requiresSecureSubmission; // ivar: _requiresSecureSubmission
@property (copy, nonatomic) NSString *submissionDestination; // ivar: _submissionDestination
@property (copy, nonatomic) NSString *submissionKey; // ivar: _submissionKey


+(Class)classForIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
+(id)newRandomlyGeneratedField;
+(id)paymentSetupFieldWithDIAttribute:(id)arg0 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg0 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg0 configuration:(id)arg1 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
+(id)sampleCustomPaymentSetupFields;
-(BOOL)_shouldStripDiacritics;
-(BOOL)isFieldTypeDate;
-(BOOL)isFieldTypeFooter;
-(BOOL)isFieldTypeLabel;
-(BOOL)isFieldTypePicker;
-(BOOL)isFieldTypeText;
-(BOOL)submissionStringMeetsAllRequirements;
-(id)_submissionStringForValue:(id)arg0 ;
-(id)dateFieldObject;
-(id)displayString;
-(id)footerFieldObject;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(id)labelFieldObject;
-(id)pickerFieldObject;
-(id)submissionString;
-(id)textFieldObject;
-(void)noteCurrentValueChanged;
-(void)updateWithAttribute:(id)arg0 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif