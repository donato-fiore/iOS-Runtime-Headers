// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPORTSMETADATAGROUP_H
#define SASPORTSMETADATAGROUP_H

@class NSString, NSArray, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupTitle;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSNumber *selected;
@property (readonly) Class superclass;


+(id)metadataGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif