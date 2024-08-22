// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREDAPPLETSUBCREDENTIAL_H
#define PKSHAREDAPPLETSUBCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredentialEntitlement.h"
#import "PKSharedAppletSubcredentialMetadata.h"

@interface PKSharedAppletSubcredential : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isDataSourceCredentialManifest) BOOL dataSourceCredentialManifest; // ivar: _dataSourceCredentialManifest
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // ivar: _entitlement
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKSharedAppletSubcredentialMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sharingInvitationReceipt:(id)arg1 ;
-(id)initWithSharedCredentialManifestItem:(id)arg0 credential:(id)arg1 ;
-(id)updateWithSharedCredentialManifestItem:(id)arg0 credential:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif