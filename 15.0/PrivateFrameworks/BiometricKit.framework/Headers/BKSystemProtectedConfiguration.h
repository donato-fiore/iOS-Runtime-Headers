// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSYSTEMPROTECTEDCONFIGURATION_H
#define BKSYSTEMPROTECTEDCONFIGURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface BKSystemProtectedConfiguration : NSObject

@property (retain, nonatomic) NSNumber *biometryEnabled; // ivar: _biometryEnabled
@property (retain, nonatomic) NSNumber *identificationEnabled; // ivar: _identificationEnabled
@property (retain, nonatomic) NSNumber *loginEnabled; // ivar: _loginEnabled
@property (retain, nonatomic) NSNumber *unlockEnabled; // ivar: _unlockEnabled
@property (retain, nonatomic) NSNumber *unlockTokenMaxLifetime; // ivar: _unlockTokenMaxLifetime


-(id)description;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif