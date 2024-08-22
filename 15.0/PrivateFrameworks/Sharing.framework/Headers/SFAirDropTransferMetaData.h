// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAIRDROPTRANSFERMETADATA_H
#define SFAIRDROPTRANSFERMETADATA_H

@class NSString, NSSet, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL canAutoAccept; // ivar: _canAutoAccept
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (nonatomic) BOOL didAutoAccept; // ivar: _didAutoAccept
@property (copy, nonatomic) NSSet *items; // ivar: _items
@property (readonly, copy, nonatomic) NSString *itemsDescription; // ivar: _itemsDescription
@property (readonly, copy, nonatomic) NSDictionary *itemsDescriptionAdvanced; // ivar: _itemsDescriptionAdvanced
@property (readonly, nonatomic) id *previewImage; // ivar: _previewImage
@property (readonly, copy, nonatomic) NSArray *rawFiles; // ivar: _rawFiles
@property (readonly, copy, nonatomic) NSString *senderBundleID; // ivar: _senderBundleID
@property (readonly, copy, nonatomic) NSString *senderCompositeName; // ivar: _senderCompositeName
@property (readonly, copy, nonatomic) NSString *senderComputerName; // ivar: _senderComputerName
@property (readonly, copy, nonatomic) NSString *senderEmail; // ivar: _senderEmail
@property (readonly, copy, nonatomic) NSString *senderEmailHash; // ivar: _senderEmailHash
@property (readonly, copy, nonatomic) NSString *senderFirstName; // ivar: _senderFirstName
@property (readonly, copy, nonatomic) NSString *senderID; // ivar: _senderID
@property (readonly, nonatomic) id *senderIcon; // ivar: _senderIcon
@property (readonly, nonatomic) BOOL senderIsMe; // ivar: _senderIsMe
@property (readonly, copy, nonatomic) NSString *senderLastName; // ivar: _senderLastName
@property (readonly, nonatomic) id *smallPreviewImage; // ivar: _smallPreviewImage
@property (nonatomic) NSInteger transferTypes; // ivar: _transferTypes
@property (readonly, nonatomic, getter=isVerifiableIdentity) BOOL verifiableIdentity; // ivar: _verifiableIdentity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInformation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUsingCoder:(id)arg0 ;


@end


#endif