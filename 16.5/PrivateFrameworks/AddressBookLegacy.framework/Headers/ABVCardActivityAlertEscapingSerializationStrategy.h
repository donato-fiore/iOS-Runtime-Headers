// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABVCARDACTIVITYALERTESCAPINGSERIALIZATIONSTRATEGY_H
#define ABVCARDACTIVITYALERTESCAPINGSERIALIZATIONSTRATEGY_H

@class NSString;
@protocol ABVCardActivityAlertAbstractSerializationStrategy;

#import <Foundation/Foundation.h>


@interface ABVCardActivityAlertEscapingSerializationStrategy : NSObject <ABVCardActivityAlertAbstractSerializationStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)strategyWouldAlterString:(id)arg0 ;
+(id)charactersToTriggerStrategy;
+(id)regex;
+(id)serializeString:(id)arg0 ;


@end


#endif