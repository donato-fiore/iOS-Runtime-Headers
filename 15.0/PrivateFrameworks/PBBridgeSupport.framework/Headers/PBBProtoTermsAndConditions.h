// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBBPROTOTERMSANDCONDITIONS_H
#define PBBPROTOTERMSANDCONDITIONS_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface PBBProtoTermsAndConditions : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *agreeDialogText; // ivar: _agreeDialogText
@property (retain, nonatomic) NSString *agreeDialogTitle; // ivar: _agreeDialogTitle
@property (retain, nonatomic) NSString *agreeLabel; // ivar: _agreeLabel
@property (retain, nonatomic) NSString *cancelLabel; // ivar: _cancelLabel
@property (retain, nonatomic) NSString *disagreeLabel; // ivar: _disagreeLabel
@property (readonly, nonatomic) BOOL hasAgreeDialogText;
@property (readonly, nonatomic) BOOL hasAgreeDialogTitle;
@property (readonly, nonatomic) BOOL hasAgreeLabel;
@property (readonly, nonatomic) BOOL hasCancelLabel;
@property (readonly, nonatomic) BOOL hasDisagreeLabel;
@property (readonly, nonatomic) BOOL hasLicense;
@property (readonly, nonatomic) BOOL hasLicenseLabel;
@property (readonly, nonatomic) BOOL hasMultiterms;
@property (readonly, nonatomic) BOOL hasServerTerms;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (readonly, nonatomic) BOOL hasWarranty;
@property (readonly, nonatomic) BOOL hasWarrantyLabel;
@property (retain, nonatomic) NSData *license; // ivar: _license
@property (retain, nonatomic) NSString *licenseLabel; // ivar: _licenseLabel
@property (retain, nonatomic) NSData *multiterms; // ivar: _multiterms
@property (retain, nonatomic) NSData *serverTerms; // ivar: _serverTerms
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent
@property (retain, nonatomic) NSData *warranty; // ivar: _warranty
@property (retain, nonatomic) NSString *warrantyLabel; // ivar: _warrantyLabel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif