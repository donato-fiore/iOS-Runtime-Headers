// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMADDACCESSORYREQUEST_H
#define HMADDACCESSORYREQUEST_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessoryCategory.h"
#import "HMSetupAccessoryDescription.h"
#import "HMHome.h"

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // ivar: _accessoryCategory
@property (retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription; // ivar: _accessoryDescription
@property (readonly, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) BOOL requiresOwnershipToken; // ivar: _requiresOwnershipToken
@property (readonly, nonatomic) BOOL requiresSetupPayloadURL; // ivar: _requiresSetupPayloadURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifer:(id)arg0 accessoryName:(id)arg1 accessoryCategory:(id)arg2 ;
-(id)payloadWithOwnershipToken:(id)arg0 ;
-(id)payloadWithURL:(id)arg0 ownershipToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif