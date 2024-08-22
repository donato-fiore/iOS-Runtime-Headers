// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UNNOTIFICATIONCONTACT_H
#define _UNNOTIFICATIONCONTACT_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UNNotificationContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *cnContactFullname; // ivar: _cnContactFullname
@property (readonly, copy, nonatomic) NSString *cnContactIdentifier; // ivar: _cnContactIdentifier
@property (readonly, nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested; // ivar: _cnContactIdentifierSuggested
@property (readonly, copy, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested; // ivar: _displayNameSuggested
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSInteger handleType; // ivar: _handleType
@property (readonly, copy, nonatomic) NSString *preferredName;
@property (readonly, nonatomic, getter=isPreferredNameReal) BOOL preferredNameReal;
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName


+(BOOL)supportsSecureCoding;
+(id)contactFromINPerson:(id)arg0 serviceName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSimilar:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)similarHash;
-(id)_initWithhandle:(id)arg0 handleType:(NSInteger)arg1 serviceName:(id)arg2 displayName:(id)arg3 displayNameSuggested:(BOOL)arg4 customIdentifier:(id)arg5 cnContactIdentifier:(id)arg6 cnContactFullname:(id)arg7 cnContactIdentifierSuggested:(BOOL)arg8 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif