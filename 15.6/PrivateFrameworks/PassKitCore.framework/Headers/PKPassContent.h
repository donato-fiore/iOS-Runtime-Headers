// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSCONTENT_H
#define PKPASSCONTENT_H

@class NSDictionary, NSArray, NSString;
@protocol NSSecureCoding;


#import "PKContent.h"
#import "PKPassBarcodeSettings.h"
#import "PKPassPersonalization.h"

@interface PKPassContent : PKContent <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *allSemantics; // ivar: _allSemantics
@property (copy, nonatomic) NSArray *backFieldBuckets; // ivar: _backFieldBuckets
@property (copy, nonatomic) NSArray *balanceFields; // ivar: _balanceFields
@property (retain, nonatomic) PKPassBarcodeSettings *barcodeSettings; // ivar: _barcodeSettings
@property (copy, nonatomic) NSString *businessChatIdentifier; // ivar: _businessChatIdentifier
@property (copy, nonatomic) NSString *cardholderInfoSectionTitle; // ivar: _cardholderInfoSectionTitle
@property (copy, nonatomic) NSArray *frontFieldBuckets; // ivar: _frontFieldBuckets
@property (copy, nonatomic) NSString *logoText; // ivar: _logoText
@property (copy, nonatomic) NSArray *passDetailSections; // ivar: _passDetailSections
@property (copy, nonatomic) PKPassPersonalization *personalization; // ivar: _personalization
@property (readonly, nonatomic) NSArray *primaryFields;
@property (copy, nonatomic) NSDictionary *semantics; // ivar: _semantics
@property (nonatomic) NSInteger transitType; // ivar: _transitType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 privateBundle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flushFormattedFieldValues;


@end


#endif