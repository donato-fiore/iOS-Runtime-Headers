// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPRONUNCIATIONCONTEXT_H
#define SASPRONUNCIATIONCONTEXT_H

@class NSString, NSURL, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASPronunciationContext : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *domainObjectIdentifier;
@property (copy, nonatomic) NSString *domainObjectPropertyIdentifier;
@property (copy, nonatomic) NSString *fullName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *tokenOffset;


+(id)pronunciationContext;
+(id)pronunciationContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif