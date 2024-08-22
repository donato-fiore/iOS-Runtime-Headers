// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCAIRPRINTPAYLOAD_H
#define MCAIRPRINTPAYLOAD_H

@class NSMutableArray;


#import "MCPayload.h"

@interface MCAirPrintPayload : MCPayload

@property (nonatomic) NSUInteger airPrintCount; // ivar: _airPrintCount
@property (retain, nonatomic) NSMutableArray *ippAddresses; // ivar: _ippAddresses


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)restrictions;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)verboseDescription;


@end


#endif