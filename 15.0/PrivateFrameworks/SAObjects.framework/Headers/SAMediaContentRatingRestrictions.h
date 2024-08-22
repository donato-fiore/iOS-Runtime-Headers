// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMEDIACONTENTRATINGRESTRICTIONS_H
#define SAMEDIACONTENTRATINGRESTRICTIONS_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>



@property (nonatomic) NSInteger appRestriction;
@property (copy, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger movieRestriction;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tvRestriction;


+(id)mediaContentRatingRestrictions;
+(id)mediaContentRatingRestrictionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif