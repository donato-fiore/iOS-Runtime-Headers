// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHNAMEDPERIOD_H
#define SALOCALSEARCHNAMEDPERIOD_H

@class NSString;
@protocol SALocalSearchPeriod;


#import "AceObject.h"

@interface SALocalSearchNamedPeriod : AceObject <SALocalSearchPeriod>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(id)namedPeriod;
+(id)namedPeriodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif