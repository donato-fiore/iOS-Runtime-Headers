// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSBLOOKUPRESULT_H
#define SSBLOOKUPRESULT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL URLContainsUserInfo; // ivar: _URLContainsUserInfo
@property (readonly, nonatomic, getter=isKnownToBeUnsafe) BOOL knownToBeUnsafe;
@property (readonly, nonatomic, getter=isMalware) BOOL malware;
@property (readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property (readonly, nonatomic) NSArray *serviceLookupResults; // ivar: _serviceLookupResults
@property (readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;


+(BOOL)supportsSecureCoding;
-(id)_initWithServiceLookUpResults:(id)arg0 ;
-(id)_initWithServiceLookUpResults:(id)arg0 URLContainsUserInfo:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif