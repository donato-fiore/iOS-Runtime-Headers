// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPCONTENTLOCATION_H
#define WFAPPCONTENTLOCATION_H

@class NSString, INAppDescriptor, NSDictionary;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;


#import "WFContentLocation.h"

@interface WFAppContentLocation : WFContentLocation <NSSecureCoding, NSCopying, WFSerializableContent>

 {
    NSString *localizedTitle;
    NSString *_localizedTitle;
}


@property (readonly, nonatomic) INAppDescriptor *appDescriptor; // ivar: _appDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger managedLevel; // ivar: _managedLevel
@property (readonly, nonatomic) NSDictionary *serializedAppDescriptor; // ivar: _serializedAppDescriptor
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)locationWithAppDescriptor:(id)arg0 ;
+(id)locationWithAppDescriptor:(id)arg0 managedLevel:(NSUInteger)arg1 ;
+(id)locationWithAppDescriptor:(id)arg0 managedLevel:(NSUInteger)arg1 promptingBehaviour:(NSUInteger)arg2 ;
+(id)locationWithAppDescriptor:(id)arg0 promptingBehaviour:(NSUInteger)arg1 ;
+(id)locationWithSystemAppBundleIdentifier:(id)arg0 ;
+(id)locationWithSystemAppBundleIdentifier:(id)arg0 promptingBehaviour:(NSUInteger)arg1 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)platformFileManagerLocation;
-(BOOL)isEqual:(id)arg0 ;
-(id)app;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppDescriptor:(id)arg0 serializedAppDescriptor:(id)arg1 identifier:(id)arg2 managedLevel:(NSUInteger)arg3 promptingBehaviour:(NSUInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedMDMDescription;
-(id)localizedTitle;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif