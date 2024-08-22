// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACCOUNTCONTENTDESTINATION_H
#define WFACCOUNTCONTENTDESTINATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;


#import "WFAppContentDestination.h"

@interface WFAccountContentDestination : WFAppContentDestination <NSSecureCoding, NSCopying, WFSerializableContent>



@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)destinationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 ;
+(id)destinationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 managedLevel:(NSUInteger)arg2 ;
+(id)destinationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 managedLevel:(NSUInteger)arg2 promptingBehaviour:(NSUInteger)arg3 ;
+(id)destinationWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 promptingBehaviour:(NSUInteger)arg2 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)appContentDestination;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 appDescriptor:(id)arg1 managedLevel:(NSUInteger)arg2 promptingBehaviour:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedMDMDescription;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif