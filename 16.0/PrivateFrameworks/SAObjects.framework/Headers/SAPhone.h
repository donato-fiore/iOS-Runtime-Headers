// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONE_H
#define SAPHONE_H

@class NSString, NSNumber;
@protocol SAAceComparable;


#import "AceObject.h"

@interface SAPhone : AceObject <SAAceComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *favoriteFacetime;
@property (copy, nonatomic) NSNumber *favoriteFacetimeAudio;
@property (copy, nonatomic) NSNumber *favoriteVoice;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSNumber *pseudo;
@property (readonly) Class superclass;


+(id)phone;
+(id)phoneWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif