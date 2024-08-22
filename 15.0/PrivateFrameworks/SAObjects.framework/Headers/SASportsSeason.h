// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPORTSSEASON_H
#define SASPORTSSEASON_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASportsSeason : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSNumber *currentSeasonYear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *relativeSeasonYear;
@property (copy, nonatomic) NSNumber *seasonYear;
@property (readonly) Class superclass;


+(id)season;
+(id)seasonWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif