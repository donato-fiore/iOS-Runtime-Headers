// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATEXTDECORATIONREGION_H
#define SATEXTDECORATIONREGION_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SATextDecorationRegion : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *length;
@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSNumber *start;
@property (readonly) Class superclass;


+(id)textDecorationRegion;
+(id)textDecorationRegionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif