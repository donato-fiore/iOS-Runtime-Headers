// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEEVALUATECONNECTIONRULE_H
#define NEEVALUATECONNECTIONRULE_H

@class NSArray, NSURL;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEEvaluateConnectionRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (readonly) NSInteger action; // ivar: _action
@property (readonly) NSArray *matchDomains; // ivar: _matchDomains
@property (copy) NSURL *probeURL; // ivar: _probeURL
@property (copy) NSArray *useDNSServers; // ivar: _useDNSServers


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchDomains:(id)arg0 andAction:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif