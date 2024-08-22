// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBCONTACT_H
#define BBCONTACT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBContact : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *cnContactFullname; // ivar: _cnContactFullname
@property (readonly, copy, nonatomic) NSString *cnContactIdentifier; // ivar: _cnContactIdentifier
@property (readonly, nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested; // ivar: _cnContactIdentifierSuggested
@property (readonly, copy, nonatomic) NSString *customDisplayName;
@property (readonly, copy, nonatomic) NSString *customHandle;
@property (readonly, nonatomic) NSInteger customHandleType;
@property (readonly, copy, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested; // ivar: _displayNameSuggested
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSInteger handleType; // ivar: _handleType
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName


+(BOOL)supportsSecureCoding;
+(id)contactWithCustomHandle:(id)arg0 customHandleType:(NSInteger)arg1 serviceName:(id)arg2 customDisplayName:(id)arg3 cnContactIdentifier:(id)arg4 cnContactFullname:(id)arg5 cnContactIdentifierSuggested:(BOOL)arg6 ;
+(id)contactWithHandle:(id)arg0 handleType:(NSInteger)arg1 serviceName:(id)arg2 displayName:(id)arg3 cnContactIdentifier:(id)arg4 cnContactFullname:(id)arg5 cnContactIdentifierSuggested:(BOOL)arg6 ;
+(id)contactWithHandle:(id)arg0 handleType:(NSInteger)arg1 serviceName:(id)arg2 displayName:(id)arg3 customIdentifier:(id)arg4 cnContactIdentifier:(id)arg5 cnContactFullname:(id)arg6 cnContactIdentifierSuggested:(BOOL)arg7 ;
+(id)contactWithHandle:(id)arg0 handleType:(NSInteger)arg1 serviceName:(id)arg2 displayName:(id)arg3 displayNameSuggested:(BOOL)arg4 customIdentifier:(id)arg5 cnContactIdentifier:(id)arg6 cnContactFullname:(id)arg7 cnContactIdentifierSuggested:(BOOL)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithHandle:(id)arg0 handleType:(NSInteger)arg1 serviceName:(id)arg2 displayName:(id)arg3 displayNameSuggested:(BOOL)arg4 customIdentifier:(id)arg5 cnContactIdentifier:(id)arg6 cnContactFullname:(id)arg7 cnContactIdentifierSuggested:(BOOL)arg8 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif