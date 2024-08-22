// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCPASSWORDLOGINCHOICE_H
#define ASCPASSWORDLOGINCHOICE_H

@class NSString, SFPasswordCredentialIdentity;
@protocol ASCLoginChoiceProtocol;

#import <Foundation/Foundation.h>


@interface ASCPasswordLoginChoice : NSObject <ASCLoginChoiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) SFPasswordCredentialIdentity *externalCredentialIdentity; // ivar: _externalCredentialIdentity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger loginChoiceKind;
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier; // ivar: _providerBundleIdentifier
@property (readonly, copy, nonatomic) NSString *site; // ivar: _site
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsername:(id)arg0 site:(id)arg1 externalCredentialIdentity:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif