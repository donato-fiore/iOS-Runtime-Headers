// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTCADENCE_H
#define PPTCADENCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PPTCadence : NSObject

@property (readonly) NSArray *cadenceTuples; // ivar: _cadenceTuples


+(BOOL)isValidCadenceJSON:(id)arg0 ;
+(id)cadenceEventSBC;
+(id)cadenceEventXPCWithFrequency:(NSUInteger)arg0 ;
+(id)cadenceInit;
+(id)cadenceInit_EventSBC;
+(id)cadenceWithJSONObject:(id)arg0 ;
+(id)cadenceWithProto:(id)arg0 ;
-(id)initWithCadenceTuples:(id)arg0 ;
-(id)proto;


@end


#endif