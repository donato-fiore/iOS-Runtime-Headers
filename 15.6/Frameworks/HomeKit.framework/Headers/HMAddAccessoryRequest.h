// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMADDACCESSORYREQUEST_H
#define HMADDACCESSORYREQUEST_H

@class NSString, NSArray, NSUUID;
@protocol HMFObject, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessoryCategory.h"
#import "HMSetupAccessoryDescription.h"
#import "HMHome.h"

@interface HMAddAccessoryRequest : NSObject <HMFObject, NSSecureCoding>



@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // ivar: _accessoryCategory
@property (retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription; // ivar: _accessoryDescription
@property (readonly, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) BOOL requiresOwnershipToken; // ivar: _requiresOwnershipToken
@property (readonly, nonatomic) BOOL requiresSetupPayloadURL; // ivar: _requiresSetupPayloadURL
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifer:(id)arg0 accessoryName:(id)arg1 accessoryCategory:(id)arg2 ;
-(id)payloadWithOwnershipToken:(id)arg0 ;
-(id)payloadWithURL:(id)arg0 ownershipToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif