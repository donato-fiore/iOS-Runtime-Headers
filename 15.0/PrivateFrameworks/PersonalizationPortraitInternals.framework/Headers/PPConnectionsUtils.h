// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCONNECTIONSUTILS_H
#define PPCONNECTIONSUTILS_H


#import <Foundation/Foundation.h>


@interface PPConnectionsUtils : NSObject



+(BOOL)isClientAuthorizedForSemanticTriggers:(id)arg0 ;
+(BOOL)isValidLinguisticQuery:(id)arg0 ;
+(BOOL)shouldAggregateLabel:(id)arg0 withValue:(id)arg1 query:(id)arg2 ;
+(id)calendarUserActivityExternalIDKey;
+(id)calendarUserActivityIdentifier;
+(id)supportedLocationSemanticTypes;
+(id)triggerTypeFromQuery:(id)arg0 ;
+(unsigned char)locationFieldFromSemanticTag:(unsigned char)arg0 ;


@end


#endif