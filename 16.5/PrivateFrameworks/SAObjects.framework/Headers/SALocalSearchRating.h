// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHRATING_H
#define SALOCALSEARCHRATING_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SALocalSearchRating : AceObject <SAAceSerializable>



@property (nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxValue;
@property (copy, nonatomic) NSString *providerId;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat value;


+(id)rating;
+(id)ratingWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif