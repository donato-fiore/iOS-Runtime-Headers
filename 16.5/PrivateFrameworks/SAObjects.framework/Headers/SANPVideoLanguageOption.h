// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SANPVIDEOLANGUAGEOPTION_H
#define SANPVIDEOLANGUAGEOPTION_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SANPVideoLanguageOption : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *languageTag;
@property (readonly) Class superclass;


+(id)languageOption;
+(id)languageOptionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif