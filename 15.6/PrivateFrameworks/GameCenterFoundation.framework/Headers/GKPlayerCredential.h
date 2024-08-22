// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKPLAYERCREDENTIAL_H
#define GKPLAYERCREDENTIAL_H

@class NSString, NSDate;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKPlayerCredential : GKInternalRepresentation

@property (retain) NSString *DSID; // ivar: _DSID
@property (retain) NSString *accountName; // ivar: _accountName
@property (retain) NSString *altDSID; // ivar: _altDSID
@property (retain) NSString *authenticationToken; // ivar: _authenticationToken
@property NSInteger environment; // ivar: _environment
@property (retain) GKPlayerInternal *playerInternal; // ivar: _playerInternal
@property (retain) NSString *rawPassword; // ivar: _rawPassword
@property unsigned int scope; // ivar: _scope
@property (readonly) NSString *scopeAsString;
@property (retain) NSDate *scopeModificationDate; // ivar: _scopeModificationDate


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif