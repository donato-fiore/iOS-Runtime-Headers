// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAALARMACEALARMWRAP_H
#define SAALARMACEALARMWRAP_H

@class NSString, NSNumber, NSURL;
@protocol SASyncWrap;


#import "SAAlarmObject.h"

@interface SAAlarmAceAlarmWrap : SAAlarmObject <SASyncWrap>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *generation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *identifier;
@property (readonly) Class superclass;


+(id)aceAlarmWrap;
+(id)aceAlarmWrapWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif