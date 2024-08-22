// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAERRORINDICATORSTATUS_H
#define SAERRORINDICATORSTATUS_H

@class NSString, NSArray;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SAErrorIndicatorStatus : AceObject <SABackgroundContextObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceFixingProblems;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *values;


+(id)errorIndicatorStatus;
+(id)errorIndicatorStatusWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif