// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMAPSBRAND_H
#define PKMAPSBRAND_H

@class NSURL, NSString, NSDate, MKWalletMerchantStylingInfo;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>


@interface PKMapsBrand : NSObject <NSSecureCoding, PKCloudStoreCoding>



@property (copy, nonatomic) NSURL *businessChatURL; // ivar: _businessChatURL
@property (nonatomic) NSInteger category; // ivar: _category
@property (copy, nonatomic) NSString *detailedCategory; // ivar: _detailedCategory
@property (copy, nonatomic) NSString *heroImageAttributionName; // ivar: _heroImageAttributionName
@property (retain, nonatomic) NSURL *heroImageURL; // ivar: _heroImageURL
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *lastProcessedDate; // ivar: _lastProcessedDate
@property (copy, nonatomic) NSURL *logoURL; // ivar: _logoURL
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (nonatomic) int resultProviderIdentifier; // ivar: _resultProviderIdentifier
@property (retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo; // ivar: _stylingInfo
@property (copy, nonatomic, setter=setURL:) NSURL *url; // ivar: _url
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(void)_deleteDeviceDataFromCloudStoreRecord:(id)arg0 ;
+(void)deleteFromCloudStoreRecord:(id)arg0 codingType:(NSUInteger)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMapsBrand:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)description;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonRepresentation;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(void)_encodeDeviceDataForCloudStoreCoder:(id)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif