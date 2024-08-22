// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIDISAMBIGUATIONGROUP_H
#define SAUIDISAMBIGUATIONGROUP_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "SAAceView.h"

@interface SAUIDisambiguationGroup : SAAceView <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *disambiguationLists;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)disambiguationGroup;
+(id)disambiguationGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif