// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSKEYCHAINOPTIONS_H
#define AMSKEYCHAINOPTIONS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AMSKeychainOptions : NSObject <NSCopying>



@property (nonatomic) BOOL authenticationFallbackVisible; // ivar: _authenticationFallbackVisible
@property (copy, nonatomic) NSString *clientCertLabel; // ivar: _clientCertLabel
@property (nonatomic) BOOL displayAuthenticationReason; // ivar: _displayAuthenticationReason
@property (copy, nonatomic) NSString *intermediateCertLabel; // ivar: _intermediateCertLabel
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (nonatomic) NSUInteger purpose; // ivar: _purpose
@property (nonatomic) BOOL regenerateKeys; // ivar: _regenerateKeys
@property (nonatomic) NSUInteger style; // ivar: _style


+(NSUInteger)preferredAttestationStyle;
-(BOOL)_compareString:(id)arg0 withString:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOptionsDictionary:(id)arg0 ;
-(id)optionsDictionary;


@end


#endif