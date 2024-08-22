// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMATCHINGSPAN_H
#define SAMATCHINGSPAN_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMatchingSpan : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *domainObjectIdentifier;
@property (nonatomic) NSInteger endIndex;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger startIndex;
@property (readonly) Class superclass;


+(id)matchingSpan;
+(id)matchingSpanWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif