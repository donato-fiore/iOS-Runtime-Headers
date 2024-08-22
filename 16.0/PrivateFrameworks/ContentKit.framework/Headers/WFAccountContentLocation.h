// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACCOUNTCONTENTLOCATION_H
#define WFACCOUNTCONTENTLOCATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;


#import "WFAppContentLocation.h"

@interface WFAccountContentLocation : WFAppContentLocation <NSSecureCoding, NSCopying, WFSerializableContent>



@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)locationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 ;
+(id)locationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 managedLevel:(NSUInteger)arg2 ;
+(id)locationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 managedLevel:(NSUInteger)arg2 promptingBehaviour:(NSUInteger)arg3 ;
+(id)locationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 promptingBehaviour:(NSUInteger)arg2 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)appContentLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 serializedAppDescriptor:(id)arg2 managedLevel:(NSUInteger)arg3 promptingBehaviour:(NSUInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedMDMDescription;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif