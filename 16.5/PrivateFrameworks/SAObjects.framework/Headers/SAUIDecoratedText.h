// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIDECORATEDTEXT_H
#define SAUIDECORATEDTEXT_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUIDecoratedText : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *ducId;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *regions;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)decoratedText;
+(id)decoratedTextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif