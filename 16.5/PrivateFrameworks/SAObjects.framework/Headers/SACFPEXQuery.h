// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACFPEXQUERY_H
#define SACFPEXQUERY_H

@class NSArray, NSString, NSNumber;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SACFPEXQuery : SABaseClientBoundCommand <SAAceSerializable>



@property (copy, nonatomic) NSArray *criteriaFields;
@property (copy, nonatomic) NSString *criteriaSemanticTag;
@property (copy, nonatomic) NSString *criteriaSubType;
@property (copy, nonatomic) NSString *criteriaTimeType;
@property (copy, nonatomic) NSString *criteriaType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *people;
@property (nonatomic) NSInteger queryLimit;
@property (copy, nonatomic) NSNumber *queryTimeOut;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *socialLabelType;
@property (readonly) Class superclass;


+(id)query;
+(id)queryWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif