// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSINGLESIGNONPAYLOADKERBEROSINFO_H
#define MCSINGLESIGNONPAYLOADKERBEROSINFO_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MCSingleSignOnPayloadKerberosInfo : NSObject

@property (retain, nonatomic) NSArray *URLPrefixMatches; // ivar: _URLPrefixMatches
@property (retain, nonatomic) NSString *accountGUID; // ivar: _accountGUID
@property (retain, nonatomic) NSString *accountTypeGUID; // ivar: _accountTypeGUID
@property (retain, nonatomic) NSArray *appIdentifierMatches; // ivar: _appIdentifierMatches
@property (retain, nonatomic) NSString *certificateUUID; // ivar: _certificateUUID
@property (retain, nonatomic) NSString *principalName; // ivar: _principalName
@property (retain, nonatomic) NSString *realm; // ivar: _realm


-(BOOL)validateAppIdentifierMatch:(id)arg0 outError:(*id)arg1 ;
-(BOOL)validateURLPrefixMatch:(id)arg0 outNormalizedString:(*id)arg1 outError:(*id)arg2 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;


@end


#endif