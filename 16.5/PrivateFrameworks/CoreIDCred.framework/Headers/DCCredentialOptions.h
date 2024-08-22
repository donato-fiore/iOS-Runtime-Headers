// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCCREDENTIALOPTIONS_H
#define DCCREDENTIALOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialOptions : NSObject <NSSecureCoding>



@property NSInteger deleteInactiveKeysAfterDays; // ivar: _deleteInactiveKeysAfterDays
@property NSInteger deleteIncompleteCredentialAfterDays; // ivar: _deleteIncompleteCredentialAfterDays
@property NSUInteger payloadProtectionPolicy; // ivar: _payloadProtectionPolicy
@property NSUInteger presentmentAuthPolicy; // ivar: _presentmentAuthPolicy
@property NSUInteger readerAuthenticationPolicy; // ivar: _readerAuthenticationPolicy


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif