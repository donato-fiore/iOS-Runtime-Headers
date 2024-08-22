// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADEVENTCREATEDFROMSUGGESTIONPREDICATE_H
#define CADEVENTCREATEDFROMSUGGESTIONPREDICATE_H

@class NSString;
@protocol EKDefaultPropertiesLoading;


#import "EKPredicate.h"

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *extractionGroupIdentifier; // ivar: _extractionGroupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *opaqueKey; // ivar: _opaqueKey
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)predicateForAllSuggestedEvents;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldLoadDefaultProperties;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtractionGroupIdentifier:(id)arg0 ;
-(id)initWithOpaqueKey:(id)arg0 ;
-(id)initWithOpaqueKey:(id)arg0 extractionGroupIdentifier:(id)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif