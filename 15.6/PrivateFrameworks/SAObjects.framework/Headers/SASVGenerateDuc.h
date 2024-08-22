// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASVGENERATEDUC_H
#define SASVGENERATEDUC_H

@class NSString, NSDictionary;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASVGenerateDuc : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *ducFamilyId;
@property (copy, nonatomic) NSString *ducId;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly) Class superclass;


+(id)generateDuc;
+(id)generateDucWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif