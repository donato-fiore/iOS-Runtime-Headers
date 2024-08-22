// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKUSERENVIRONMENT_H
#define WLKUSERENVIRONMENT_H

@class NSNumber, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface WLKUserEnvironment : NSObject

@property (retain, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (nonatomic) BOOL consented; // ivar: _consented
@property (retain, nonatomic) NSArray *consentedBrands; // ivar: _consentedBrands
@property (retain, nonatomic) NSString *countryIdentifier; // ivar: _countryIdentifier
@property (retain, nonatomic) NSArray *deniedBrands; // ivar: _deniedBrands
@property (retain, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (nonatomic) BOOL internalBuild; // ivar: _internalBuild
@property (retain, nonatomic) NSString *languageIdentifier; // ivar: _languageIdentifier
@property (retain, nonatomic) NSString *platform; // ivar: _platform
@property (nonatomic) NSUInteger protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) NSString *restrictions; // ivar: _restrictions
@property (retain, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier


+(id)currentEnvironment;
+(void)setCurrentEnvironmentForTesting:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEnvironment:(id)arg0 ;
-(NSUInteger)hash;
-(id)_consentQuery;
-(id)_queryParametersV3;
-(id)_queryPostV3;
-(id)description;
-(id)init;


@end


#endif