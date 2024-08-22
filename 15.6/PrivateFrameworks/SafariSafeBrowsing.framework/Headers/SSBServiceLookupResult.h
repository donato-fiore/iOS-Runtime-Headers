// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly, nonatomic, getter=learnMoreURL) NSURL *learnMoreURL;
@property (readonly, nonatomic, getter=localizedProviderDisplayName) NSString *localizedProviderDisplayName;
@property (readonly, nonatomic, getter=isMalware) BOOL malware;
@property (readonly, nonatomic, getter=malwareDetailsBase) NSString *malwareDetailsBaseURLString; // ivar: _malwareDetailsBaseURLString
@property (readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic, getter=reportAnErrorBase) NSString *reportAnErrorBaseURLString; // ivar: _reportAnErrorBaseURLString
@property (readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;


+(BOOL)supportsSecureCoding;
-(id)_initWithLookupResult:(struct LookupResult )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif