// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAPPCONTENTDESTINATION_H
#define WFAPPCONTENTDESTINATION_H

@class NSString, INAppDescriptor;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;


#import "WFContentDestination.h"

@interface WFAppContentDestination : WFContentDestination <NSSecureCoding, NSCopying, WFSerializableContent>

 {
    NSString *localizedTitle;
    NSString *_localizedTitle;
}


@property (readonly, nonatomic) INAppDescriptor *appDescriptor; // ivar: _appDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger managedLevel; // ivar: _managedLevel
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)destinationWithAppDescriptor:(id)arg0 ;
+(id)destinationWithAppDescriptor:(id)arg0 alwaysRequiresApproval:(BOOL)arg1 ;
+(id)destinationWithAppDescriptor:(id)arg0 managedLevel:(NSUInteger)arg1 ;
+(id)destinationWithAppDescriptor:(id)arg0 managedLevel:(NSUInteger)arg1 alwaysRequiresApproval:(BOOL)arg2 ;
+(id)destinationWithSystemAppBundleIdentifier:(id)arg0 ;
+(id)destinationWithSystemAppBundleIdentifier:(id)arg0 alwaysRequiresApproval:(BOOL)arg1 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)app;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppDescriptor:(id)arg0 identifier:(id)arg1 managedLevel:(NSUInteger)arg2 alwaysRequiresApproval:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedMDMDescription;
-(id)localizedTitle;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif