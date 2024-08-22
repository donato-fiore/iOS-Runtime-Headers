// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADEVENTCREATEDFROMSUGGESTIONPREDICATE_H
#define CADEVENTCREATEDFROMSUGGESTIONPREDICATE_H

@class NSString;


#import "EKPredicate.h"

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate

@property (readonly, nonatomic) NSString *extractionGroupIdentifier; // ivar: _extractionGroupIdentifier
@property (readonly, nonatomic) NSString *opaqueKey; // ivar: _opaqueKey


+(BOOL)supportsSecureCoding;
+(id)predicateForAllSuggestedEvents;
-(?)copyMatchingItemsWithDatabase;
-(BOOL)isEqual:(id)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtractionGroupIdentifier:(id)arg0 ;
-(id)initWithOpaqueKey:(id)arg0 ;
-(id)initWithOpaqueKey:(id)arg0 extractionGroupIdentifier:(id)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif