// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASUTTERANCE_H
#define SASUTTERANCE_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASUtterance : AceObject <SAAceSerializable>



@property (nonatomic) CGFloat confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *interpretationIndices;
@property (readonly) Class superclass;


+(id)utterance;
+(id)utteranceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif