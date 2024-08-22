// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WBSSAVEDACCOUNTPARTIALCREDENTIAL_H
#define _WBSSAVEDACCOUNTPARTIALCREDENTIAL_H

@class NSDate, NSData, NSURLProtectionSpace;

#import <Foundation/Foundation.h>


@interface _WBSSavedAccountPartialCredential : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic, getter=isDefaultCredentialForProtectionSpace) BOOL defaultCredentialForProtectionSpace; // ivar: _defaultCredentialForProtectionSpace
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) NSData *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace


-(id)initWithProtectionSpace:(id)arg0 modificationDate:(id)arg1 creationDate:(id)arg2 persistentIdentifier:(id)arg3 isDefaultCredentialForProtectionSpace:(BOOL)arg4 ;


@end


#endif