// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFPEERINFO_H
#define AFPEERINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFPeerInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSString *aceVersion; // ivar: _aceVersion
@property (readonly, copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeKitAccessoryIdentifier; // ivar: _homeKitAccessoryIdentifier
@property (readonly, copy, nonatomic) NSString *idsDeviceUniqueIdentifier; // ivar: _idsDeviceUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (readonly, nonatomic) BOOL isCommunalDevice; // ivar: _isCommunalDevice
@property (readonly, nonatomic) BOOL isDeviceOwnedByCurrentUser; // ivar: _isDeviceOwnedByCurrentUser
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier; // ivar: _mediaRouteIdentifier
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier; // ivar: _mediaSystemIdentifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *productType; // ivar: _productType
@property (readonly, copy, nonatomic) NSString *rapportEffectiveIdentifier; // ivar: _rapportEffectiveIdentifier
@property (readonly, copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (readonly, copy, nonatomic) NSString *sharedUserID;
@property (readonly, copy, nonatomic) NSString *sharedUserIdentifier; // ivar: _sharedUserIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userInterfaceIdiom; // ivar: _userInterfaceIdiom


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)ad_shortDescription;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithIsDeviceOwnedByCurrentUser:(BOOL)arg0 assistantIdentifier:(id)arg1 idsIdentifier:(id)arg2 idsDeviceUniqueIdentifier:(id)arg3 sharedUserID:(id)arg4 rapportEffectiveIdentifier:(id)arg5 homeKitAccessoryIdentifier:(id)arg6 mediaSystemIdentifier:(id)arg7 mediaRouteIdentifier:(id)arg8 isCommunalDevice:(BOOL)arg9 roomName:(id)arg10 name:(id)arg11 productType:(id)arg12 buildVersion:(id)arg13 userInterfaceIdiom:(id)arg14 aceVersion:(id)arg15 ;
-(id)initWithIsDeviceOwnedByCurrentUser:(BOOL)arg0 assistantIdentifier:(id)arg1 sharedUserIdentifier:(id)arg2 idsIdentifier:(id)arg3 idsDeviceUniqueIdentifier:(id)arg4 rapportEffectiveIdentifier:(id)arg5 homeKitAccessoryIdentifier:(id)arg6 mediaSystemIdentifier:(id)arg7 mediaRouteIdentifier:(id)arg8 isCommunalDevice:(BOOL)arg9 roomName:(id)arg10 name:(id)arg11 productType:(id)arg12 buildVersion:(id)arg13 userInterfaceIdiom:(id)arg14 aceVersion:(id)arg15 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif