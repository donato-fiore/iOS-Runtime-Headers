// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCPRESENTMENTSESSIONOPTIONS_H
#define DCPRESENTMENTSESSIONOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentSessionOptions : NSObject <NSSecureCoding>



@property NSUInteger elementFallbackModes; // ivar: _elementFallbackModes
@property NSUInteger readerAuthenticationPolicy; // ivar: _readerAuthenticationPolicy
@property NSUInteger responseEncryptionMode; // ivar: _responseEncryptionMode
@property NSUInteger sessionEncryptionMode; // ivar: _sessionEncryptionMode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionEncryptionMode:(NSUInteger)arg0 ;
-(id)initWithSessionEncryptionMode:(NSUInteger)arg0 readerAuthenticationPolicy:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif