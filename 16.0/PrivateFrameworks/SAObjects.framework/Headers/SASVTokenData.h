// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASVTOKENDATA_H
#define SASVTOKENDATA_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASVTokenData : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *endTimeMillis;
@property (readonly) NSUInteger hash;
@property (nonatomic) float score;
@property (copy, nonatomic) NSNumber *startTimeMillis;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)tokenData;
+(id)tokenDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif