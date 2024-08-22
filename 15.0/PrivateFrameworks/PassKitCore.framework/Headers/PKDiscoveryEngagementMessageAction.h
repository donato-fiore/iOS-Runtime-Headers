// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYENGAGEMENTMESSAGEACTION_H
#define PKDISCOVERYENGAGEMENTMESSAGEACTION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *actionInfo; // ivar: _actionInfo
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
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


@end


#endif