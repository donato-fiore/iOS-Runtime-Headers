// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCOLLABORATIONMETADATA_H
#define SWCOLLABORATIONMETADATA_H

@class NSArray, NSString, CKContainerSetupInfo, UTType, NSDate, NSDictionary, NSPersonNameComponents, NSData;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SWCollaborationShareOptions.h"

@interface SWCollaborationMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (copy, nonatomic) NSArray *ckAppBundleIDs; // ivar: _ckAppBundleIDs
@property (copy, nonatomic) NSString *collaborationIdentifier; // ivar: _collaborationIdentifier
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // ivar: _containerSetupInfo
@property (readonly, copy, nonatomic) UTType *contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSArray *defaultOptions; // ivar: _defaultOptions
@property (copy, nonatomic) SWCollaborationShareOptions *defaultShareOptions; // ivar: _defaultShareOptions
@property (copy, nonatomic) NSDictionary *handleToIdentityMap; // ivar: _handleToIdentityMap
@property (copy, nonatomic) NSString *initiatorHandle; // ivar: _initiatorHandle
@property (retain, nonatomic) NSPersonNameComponents *initiatorNameComponents; // ivar: _initiatorNameComponents
@property (readonly, copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (retain, nonatomic) NSString *originatingBundleIdentifier; // ivar: _originatingBundleIdentifier
@property (retain, nonatomic) NSData *sourceProcessData; // ivar: _sourceProcessData
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *userSelectedOptions; // ivar: _userSelectedOptions
@property (copy, nonatomic) SWCollaborationShareOptions *userSelectedShareOptions; // ivar: _userSelectedShareOptions


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCollaborationMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationIdentifier:(id)arg0 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 ckAppBundleIDs:(id)arg5 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 ckAppBundleIDs:(id)arg5 initiatorHandle:(id)arg6 initiatorNameComponents:(id)arg7 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 containerSetupInfo:(id)arg5 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 initiatorHandle:(id)arg5 initiatorNameComponents:(id)arg6 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 initiatorHandle:(id)arg3 initiatorNameComponents:(id)arg4 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultOptions:(id)arg2 initiatorHandle:(id)arg3 initiatorNameComponents:(id)arg4 containerSetupInfo:(id)arg5 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 ckAppBundleIDs:(id)arg5 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 ckAppBundleIDs:(id)arg5 initiatorHandle:(id)arg6 initiatorNameComponents:(id)arg7 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 initiatorHandle:(id)arg5 initiatorNameComponents:(id)arg6 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 creationDate:(id)arg3 contentType:(id)arg4 initiatorHandle:(id)arg5 initiatorNameComponents:(id)arg6 containerSetupInfo:(id)arg7 sourceProcessData:(id)arg8 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 initiatorHandle:(id)arg3 initiatorNameComponents:(id)arg4 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 initiatorHandle:(id)arg3 initiatorNameComponents:(id)arg4 containerSetupInfo:(id)arg5 ;
-(id)initWithCollaborationIdentifier:(id)arg0 title:(id)arg1 defaultShareOptions:(id)arg2 initiatorHandle:(id)arg3 initiatorNameComponents:(id)arg4 containerSetupInfo:(id)arg5 sourceProcessData:(id)arg6 ;
-(id)initWithLocalIdentifier:(id)arg0 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6 initiatorHandle:(id)arg7 initiatorNameComponents:(id)arg8 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 initiatorHandle:(id)arg4 initiatorNameComponents:(id)arg5 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6 initiatorHandle:(id)arg7 initiatorNameComponents:(id)arg8 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6 initiatorHandle:(id)arg7 initiatorNameComponents:(id)arg8 containerSetupInfo:(id)arg9 sourceProcessData:(id)arg10 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 defaultOptions:(id)arg4 creationDate:(id)arg5 contentType:(id)arg6 initiatorHandle:(id)arg7 initiatorNameComponents:(id)arg8 ckAppBundleIDs:(id)arg9 handleToIdentityMap:(id)arg10 containerSetupInfo:(id)arg11 sourceProcessData:(id)arg12 ;
-(id)initWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 initiatorHandle:(id)arg4 initiatorNameComponents:(id)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_commonInitWithLocalIdentifier:(id)arg0 collaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 defaultOptions:(id)arg4 creationDate:(id)arg5 contentType:(id)arg6 initiatorHandle:(id)arg7 initiatorNameComponents:(id)arg8 ckAppBundleIDs:(id)arg9 handleToIdentityMap:(id)arg10 containerSetupInfo:(id)arg11 sourceProcessData:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif