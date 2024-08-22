// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAEMAIL_H
#define SAEMAIL_H

@class NSString, NSNumber;
@protocol SAAceComparable;


#import "AceObject.h"

@interface SAEmail : AceObject <SAAceComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSNumber *favoriteFacetime;
@property (copy, nonatomic) NSNumber *favoriteFacetimeAudio;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *pseudo;
@property (readonly) Class superclass;


+(id)email;
+(id)emailWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif