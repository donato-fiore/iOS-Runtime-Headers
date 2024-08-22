// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTDOMAININFO_H
#define PTDOMAININFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PTDomainInfo : NSObject <NSSecureCoding>

 {
    NSString *_uniqueIdentifier;
}


@property (readonly, nonatomic) NSString *domainGroupName; // ivar: _domainGroupName
@property (readonly, nonatomic) NSString *domainName; // ivar: _domainName
@property (readonly, nonatomic) NSString *settingsClassName; // ivar: _settingsClassName
@property (readonly, nonatomic) NSString *settingsFrameworkBundlePath; // ivar: _settingsFrameworkBundlePath
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif