// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHRANGEPERIOD_H
#define SALOCALSEARCHRANGEPERIOD_H

@class NSString;
@protocol SALocalSearchPeriod;


#import "AceObject.h"

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger endSecondsSinceMidnight;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger startSecondsSinceMidnight;
@property (readonly) Class superclass;


+(id)rangePeriod;
+(id)rangePeriodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif