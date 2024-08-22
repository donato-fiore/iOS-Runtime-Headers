// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPIDENTITY_H
#define RPIDENTITY_H

@class NSArray, NSString, NSDictionary, NSDate, NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RPIdentity : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *accessGroups; // ivar: _accessGroups
@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (copy, nonatomic) NSDictionary *acl; // ivar: _acl
@property (copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (copy, nonatomic) NSDate *dateAcknowledged; // ivar: _dateAcknowledged
@property (copy, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (copy, nonatomic) NSDate *dateRemoved; // ivar: _dateRemoved
@property (copy, nonatomic) NSDate *dateRequested; // ivar: _dateRequested
@property (copy, nonatomic) NSData *deviceIRKData; // ivar: _deviceIRKData
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (copy, nonatomic) NSData *edPKData; // ivar: _edPKData
@property (copy, nonatomic) NSData *edSKData; // ivar: _edSKData
@property (nonatomic) NSUInteger featureFlags; // ivar: _featureFlags
@property (copy, nonatomic) NSUUID *homeKitUserIdentifier; // ivar: _homeKitUserIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *idsDeviceID; // ivar: _idsDeviceID
@property (copy, nonatomic) NSString *mediaRemoteID; // ivar: _mediaRemoteID
@property (copy, nonatomic) NSString *mediaRouteID; // ivar: _mediaRouteID
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL present; // ivar: _present
@property (nonatomic) unsigned int revisionID; // ivar: _revisionID
@property (copy, nonatomic) NSString *sendersKnownAlias; // ivar: _sendersKnownAlias
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) BOOL userAdded; // ivar: _userAdded


+(BOOL)supportsSecureCoding;
+(id)nullIdentity;
-(BOOL)signDataPtr:(*void)arg0 dataLen:(NSUInteger)arg1 signatureBytes:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)verifyAuthTag:(id)arg0 data:(id)arg1 type:(int)arg2 error:(*id)arg3 ;
-(BOOL)verifyAuthTagPtr:(*void)arg0 authTagLen:(NSUInteger)arg1 dataPtr:(*void)arg2 dataLen:(NSUInteger)arg3 type:(int)arg4 error:(*id)arg5 ;
-(BOOL)verifySignature:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifySignaturePtr:(*void)arg0 signatureLen:(NSUInteger)arg1 dataPtr:(*void)arg2 dataLen:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)authTagForData:(id)arg0 type:(int)arg1 error:(*id)arg2 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 ;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(unsigned int)compareWithRPIdentity:(id)arg0 ;
-(unsigned int)updateWithKeychainItem:(id)arg0 error:(*id)arg1 ;
-(unsigned int)updateWithRPMessage:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif