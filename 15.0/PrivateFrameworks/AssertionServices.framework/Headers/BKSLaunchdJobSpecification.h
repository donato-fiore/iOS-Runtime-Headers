// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSLAUNCHDJOBSPECIFICATION_H
#define BKSLAUNCHDJOBSPECIFICATION_H

@class NSArray, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSLaunchdJobSpecification : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (copy, nonatomic) NSDictionary *environment; // ivar: _environment
@property (copy, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (nonatomic) NSUInteger executionOptions; // ivar: _executionOptions
@property (copy, nonatomic) NSString *labelPrefix; // ivar: _labelPrefix
@property (copy, nonatomic) NSArray *machServices; // ivar: _machServices
@property (copy, nonatomic) NSString *managedPersona; // ivar: _managedPersona
@property (copy, nonatomic) NSString *standardError; // ivar: _standardError
@property (copy, nonatomic) NSString *standardOutput; // ivar: _standardOutput


+(BOOL)supportsSecureCoding;
+(id)specification;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif