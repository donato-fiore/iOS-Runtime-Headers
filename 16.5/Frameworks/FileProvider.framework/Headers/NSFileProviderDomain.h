// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDERDOMAIN_H
#define NSFILEPROVIDERDOMAIN_H

@class NSData, NSString, NSDictionary, NSError, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSFileProviderDomain : NSObject <NSSecureCoding, NSCopying>

 {
    NSData *_backingStoreIdentity;
}


@property (retain, nonatomic) NSData *backingStoreIdentity;
@property (nonatomic) BOOL containsPhotos; // ivar: _containsPhotos
@property (nonatomic, getter=isDisconnected) BOOL disconnected; // ivar: _disconnected
@property (nonatomic, getter=_disconnectionOptions, setter=_setDisconnectionOptions:) NSUInteger disconnectionOptions; // ivar: _disconnectionOptions
@property (retain, nonatomic, getter=_disconnectionReason, setter=_setDisconnectionReason:) NSString *disconnectionReason; // ivar: _disconnectionReason
@property (readonly, copy) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSDictionary *domainUserInfo; // ivar: _domainUserInfo
@property (nonatomic, getter=isEjectable) BOOL ejectable; // ivar: _ejectable
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic, getter=isHiddenByUser) BOOL hiddenByUser; // ivar: _hiddenByUser
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (nonatomic) BOOL isDataSeparatedDomain; // ivar: _isDataSeparatedDomain
@property (nonatomic) BOOL isEnterpriseDomain; // ivar: _isEnterpriseDomain
@property (readonly, copy) NSString *pathRelativeToDocumentStorage; // ivar: _pathRelativeToDocumentStorage
@property (retain, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (nonatomic) BOOL readOnly; // ivar: _readOnly
@property (getter=isReplicated) BOOL replicated; // ivar: _replicated
@property (retain, nonatomic) NSString *spotlightDomainIdentifier; // ivar: _spotlightDomainIdentifier
@property BOOL supportsSyncingTrash; // ivar: _supportsSyncingTrash
@property (copy, nonatomic) NSString *symLinkName; // ivar: _symLinkName
@property NSUInteger testingModes; // ivar: _testingModes
@property (nonatomic) BOOL userEnabled; // ivar: _userEnabled
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) NSUUID *volumeUUID; // ivar: _volumeUUID


+(BOOL)supportsSecureCoding;
+(id)domainFromPlistDictionary:(id)arg0 identifier:(id)arg1 volumeURL:(id)arg2 replicatedByDefault:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 pathRelativeToDocumentStorage:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 pathRelativeToDocumentStorage:(id)arg2 hidden:(BOOL)arg3 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 volumeURL:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 volumeURL:(id)arg2 pathRelativeToDocumentStorage:(id)arg3 hidden:(BOOL)arg4 replicated:(BOOL)arg5 ;
-(id)plistDictionary;
-(void)copyValuesFromExistingDomain:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif