// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCREDENTIALMANIFESTENTRY_H
#define CRKASMCREDENTIALMANIFESTENTRY_H

@class NSString, NSDateInterval;
@protocol CRKDictionaryFormatable;

#import <Foundation/Foundation.h>


@interface CRKASMCredentialManifestEntry : NSObject <CRKDictionaryFormatable>



@property (readonly, copy, nonatomic) NSString *fingerprint; // ivar: _fingerprint
@property (readonly, nonatomic, getter=isFullyPopulated) BOOL fullyPopulated;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (readonly, nonatomic) NSDateInterval *validityInterval; // ivar: _validityInterval


+(id)validityIntervalWithDictionary:(id)arg0 ;
-(id)dictionaryValue;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithUserIdentifier:(id)arg0 validityInterval:(id)arg1 fingerprint:(id)arg2 ;


@end


#endif