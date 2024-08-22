// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INRIDEDRIVER_H
#define INRIDEDRIVER_H

@class NSString;
@protocol INImageProxyInjecting, INRideDriverExport, NSCopying, NSSecureCoding;


#import "INPerson.h"

@interface INRideDriver : INPerson <INImageProxyInjecting, INRideDriverExport, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *rating; // ivar: _rating
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithUserInput:(id)arg0 personHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 relationship:(id)arg7 aliases:(id)arg8 suggestionType:(NSInteger)arg9 isMe:(BOOL)arg10 scoredAlternatives:(id)arg11 sourceAppBundleIdentifier:(id)arg12 phonemeData:(id)arg13 ;
-(id)_initWithUserInput:(id)arg0 personHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 rating:(id)arg6 aliases:(id)arg7 ;
-(id)_initWithUserInput:(id)arg0 personHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 rating:(id)arg6 phoneNumber:(id)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 displayName:(id)arg1 image:(id)arg2 rating:(id)arg3 phoneNumber:(id)arg4 ;
-(id)initWithHandle:(id)arg0 nameComponents:(id)arg1 image:(id)arg2 rating:(id)arg3 phoneNumber:(id)arg4 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 isMe:(BOOL)arg6 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 rating:(id)arg4 phoneNumber:(id)arg5 ;
-(id)initWithPhoneNumber:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 rating:(id)arg4 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif