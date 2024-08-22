// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTATTRIBUTIONSET_H
#define WFCONTENTATTRIBUTIONSET_H

@class NSArray, NSString;
@protocol NSSecureCoding, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent>



@property (readonly, copy, nonatomic) NSArray *attributions; // ivar: _attributions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger derivedDisclosureLevel;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)attributionSetByMergingAttributionSets:(id)arg0 ;
+(id)attributionSetWithAccountBasedAppDescriptor:(id)arg0 accountIdentifier:(id)arg1 disclosureLevel:(NSUInteger)arg2 originalItemIdentifier:(id)arg3 ;
+(id)attributionSetWithAppDescriptor:(id)arg0 disclosureLevel:(NSUInteger)arg1 ;
+(id)attributionSetWithAppDescriptor:(id)arg0 disclosureLevel:(NSUInteger)arg1 originalItemIdentifier:(id)arg2 ;
+(id)attributionSetWithAttributions:(id)arg0 ;
+(id)attributionSetWithOrigin:(id)arg0 disclosureLevel:(NSUInteger)arg1 ;
+(id)attributionSetWithOrigin:(id)arg0 disclosureLevel:(NSUInteger)arg1 originalItemIdentifier:(id)arg2 ;
+(id)combiningAttributions:(id)arg0 withAttributions:(id)arg1 ;
+(id)compactAttributionsFrom:(id)arg0 disclosureLevel:(NSUInteger)arg1 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)reducedAttributionsFrom:(id)arg0 ;
+(id)shortcutsAppAttributionSet;
+(id)shortcutsAppAttributionSetWithDisclosureLevel:(NSUInteger)arg0 ;
-(BOOL)isAllowedToBeSentToDestinationWithManagedLevel:(NSUInteger)arg0 ;
-(BOOL)isEligibleToShareWithResultManagedLevel:(*NSUInteger)arg0 ;
-(BOOL)isEligibleToShareWithResultManagedLevel:(*NSUInteger)arg0 usingManagedConfigurationManager:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMoreRestrictiveThan:(id)arg0 ;
-(BOOL)isSupersetOfAttributionSet:(id)arg0 ;
-(NSUInteger)derivedManagedLevel;
-(id)allOrigins;
-(id)attributionSetByReplacingAccountWithAppOrigins;
-(id)initWithAttribution:(id)arg0 ;
-(id)initWithAttributions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif