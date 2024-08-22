// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYENGAGEMENTMESSAGE_H
#define PKDISCOVERYENGAGEMENTMESSAGE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;


#import "PKDiscoveryObject.h"
#import "PKDiscoveryEngagementMessageAction.h"

@interface PKDiscoveryEngagementMessage : PKDiscoveryObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKDiscoveryEngagementMessageAction *action; // ivar: _action
@property (retain, nonatomic) NSDictionary *iconURLs; // ivar: _iconURLs
@property (readonly, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic) NSString *messageKey; // ivar: _messageKey
@property (nonatomic) NSInteger passQualifier; // ivar: _passQualifier
@property (nonatomic, getter=canReportIdentifierToAggd) BOOL reportIdentifierToAggd; // ivar: _reportIdentifierToAggd
@property (retain, nonatomic) NSString *titleKey; // ivar: _titleKey
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)updateForRuleResult:(BOOL)arg0 ;
-(void)updateWithDiscoveryEngagementMessage:(id)arg0 ;


@end


#endif