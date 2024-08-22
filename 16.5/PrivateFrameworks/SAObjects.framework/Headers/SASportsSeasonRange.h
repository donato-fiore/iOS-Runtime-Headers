// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPORTSSEASONRANGE_H
#define SASPORTSSEASONRANGE_H

@class NSString, NSDate;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASportsSeasonRange : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *end;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *seasonType;
@property (copy, nonatomic) NSDate *start;
@property (readonly) Class superclass;


+(id)seasonRange;
+(id)seasonRangeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif