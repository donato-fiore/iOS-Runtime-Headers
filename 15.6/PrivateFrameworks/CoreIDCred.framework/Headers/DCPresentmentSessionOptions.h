// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCPRESENTMENTSESSIONOPTIONS_H
#define DCPRESENTMENTSESSIONOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentSessionOptions : NSObject <NSSecureCoding>



@property NSUInteger readerAuthenticationPolicy; // ivar: _readerAuthenticationPolicy
@property NSUInteger sessionEncryptionMode; // ivar: _sessionEncryptionMode


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionEncryptionMode:(NSUInteger)arg0 ;
-(id)initWithSessionEncryptionMode:(NSUInteger)arg0 readerAuthenticationPolicy:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif