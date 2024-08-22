// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASENDINSTRUMENTATION_H
#define SASENDINSTRUMENTATION_H

@class NSString, NSNumber, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASendInstrumentation : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *eventTransmittedRelativeToBootTimeTimestampNs;
@property (copy, nonatomic) NSString *eventTransmittedTimestampRefId;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *instrumentationBatch;
@property (copy, nonatomic) NSString *payloadVersion;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)sendInstrumentation;
+(id)sendInstrumentationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif