// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGCONFIRGURATION_H
#define PKAPPLETSUBCREDENTIALSHARINGCONFIRGURATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger maxNumberOfSharedCredentials; // ivar: _maxNumberOfSharedCredentials
@property (nonatomic) NSUInteger numberOfShareableCredentials; // ivar: _numberOfShareableCredentials
@property (nonatomic) BOOL sharingRequiresPassword; // ivar: _sharingRequiresPassword
@property (copy, nonatomic) NSArray *supportedEntitlements; // ivar: _supportedEntitlements


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)supportedEntitlementWithValue:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif