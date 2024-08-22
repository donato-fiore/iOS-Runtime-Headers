// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCREDENTIALIDENTITY_H
#define SFCREDENTIALIDENTITY_H

@class NSString, NSDate;
@protocol SFSafariPasswordCredential, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFCredentialProviderExtensionState.h"

@interface SFCredentialIdentity : NSObject <SFSafariPasswordCredential, NSCopying, NSSecureCoding>

 {
    NSString *_domainWithoutWWWDot;
}


@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, copy, nonatomic) NSString *externalRecordIdentifier; // ivar: _externalRecordIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFCredentialProviderExtensionState *owningExtensionState; // ivar: _owningExtensionState
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSInteger rank; // ivar: _rank
@property (nonatomic) NSInteger rowIdentifier; // ivar: _rowIdentifier
@property (readonly, copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly, nonatomic) NSInteger serviceIdentifierType; // ivar: _serviceIdentifierType
@property (readonly, copy, nonatomic) NSString *site;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, copy, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareForQuickTypeBar:(id)arg0 ;
-(id)_domainWithoutWWWDot;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRowIdentifier:(NSInteger)arg0 serviceIdentifier:(id)arg1 serviceIdentifierType:(NSInteger)arg2 externalRecordIdentifier:(id)arg3 user:(id)arg4 rank:(NSInteger)arg5 ;
-(id)initWithRowIdentifier:(NSInteger)arg0 serviceIdentifier:(id)arg1 serviceIdentifierType:(NSInteger)arg2 externalRecordIdentifier:(id)arg3 user:(id)arg4 rank:(NSInteger)arg5 owningExtensionState:(id)arg6 ;
-(id)initWithServiceIdentifier:(id)arg0 serviceIdentifierType:(NSInteger)arg1 externalRecordIdentifier:(id)arg2 user:(id)arg3 rank:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif