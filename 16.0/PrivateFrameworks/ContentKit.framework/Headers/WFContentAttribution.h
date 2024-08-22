// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTATTRIBUTION_H
#define WFCONTENTATTRIBUTION_H

@class NSString, NSOrderedSet;
@protocol NSSecureCoding, WFSerializableContent;

#import <Foundation/Foundation.h>

#import "WFContentLocation.h"

@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent>



@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger disclosureLevel; // ivar: _disclosureLevel
@property (readonly, nonatomic) NSOrderedSet *disclosureWarnings; // ivar: _disclosureWarnings
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFContentLocation *origin; // ivar: _origin
@property (retain, nonatomic) NSOrderedSet *privateItemIdentifiers; // ivar: _privateItemIdentifiers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)attributionWithAppDescriptor:(id)arg0 accountIdentifier:(id)arg1 disclosureLevel:(NSUInteger)arg2 managedLevel:(NSUInteger)arg3 ;
+(id)attributionWithAppDescriptor:(id)arg0 disclosureLevel:(NSUInteger)arg1 ;
+(id)attributionWithDisclosureLevel:(NSUInteger)arg0 origin:(id)arg1 disclosureWarnings:(id)arg2 originalItemIdentifier:(id)arg3 ;
+(id)attributionWithDisclosureLevel:(NSUInteger)arg0 origin:(id)arg1 disclosureWarnings:(id)arg2 originalItemIdentifiers:(id)arg3 ;
+(id)attributionWithDisclosureLevel:(NSUInteger)arg0 origin:(id)arg1 disclosureWarnings:(id)arg2 originalItemIdentifiers:(id)arg3 count:(NSUInteger)arg4 ;
+(id)attributionWithDisclosureLevel:(NSUInteger)arg0 origin:(id)arg1 originalItemIdentifier:(id)arg2 ;
+(id)attributionWithDisclosureLevel:(NSUInteger)arg0 origin:(id)arg1 originalItemIdentifiers:(id)arg2 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)shortcutsAppAttribution;
+(id)shortcutsAppAttributionWithDisclosureLevel:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributionByUpdatingItemsCount:(NSUInteger)arg0 ;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisclosureLevel:(NSUInteger)arg0 origin:(id)arg1 disclosureWarnings:(id)arg2 originalItemIdentifiers:(id)arg3 count:(NSUInteger)arg4 ;
-(id)wfSerializedRepresentation;
-(id)wfSerializedRepresentationWithPrivateItemIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif