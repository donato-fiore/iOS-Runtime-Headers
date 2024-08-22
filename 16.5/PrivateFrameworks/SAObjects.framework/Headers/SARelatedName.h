// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARELATEDNAME_H
#define SARELATEDNAME_H

@class NSString;
@protocol SAAceSerializable, SAAceComparable;


#import "AceObject.h"

@interface SARelatedName : AceObject <SAAceSerializable, SAAceComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(id)relatedName;
+(id)relatedNameWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif