// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSBSERVICELOOKUPRESULT_H
#define SSBSERVICELOOKUPRESULT_H

@class NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding>

 {
    LookupResult _lookupResult;
}


@property (readonly, nonatomic, getter=isKnownToBeUnsafe) BOOL knownToBeUnsafe;
@property (readonly, nonatomic) NSURL *learnMoreURL;
@property (readonly, nonatomic) NSString *localizedProviderDisplayName;
@property (readonly, nonatomic, getter=isMalware) BOOL malware;
@property (readonly, nonatomic) NSString *malwareDetailsBaseURLString;
@property (readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSString *reportAnErrorBaseURLString;
@property (readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;


+(BOOL)supportsSecureCoding;
-(id)_initWithLookupResult:(struct LookupResult )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif