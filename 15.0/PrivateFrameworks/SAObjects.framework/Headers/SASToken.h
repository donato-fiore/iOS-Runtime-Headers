// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTOKEN_H
#define SASTOKEN_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASToken : AceObject <SAAceSerializable>



@property (nonatomic) BOOL addSpaceAfter;
@property (copy, nonatomic) NSNumber *confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *endTime;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *phoneSequence;
@property (copy, nonatomic) NSString *recognitionStability;
@property (nonatomic) BOOL removeSpaceAfter;
@property (nonatomic) BOOL removeSpaceBefore;
@property (copy, nonatomic) NSNumber *silenceStartTime;
@property (copy, nonatomic) NSNumber *startTime;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)token;
+(id)tokenWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif