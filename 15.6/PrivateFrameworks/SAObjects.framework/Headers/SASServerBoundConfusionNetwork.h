// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSERVERBOUNDCONFUSIONNETWORK_H
#define SASSERVERBOUNDCONFUSIONNETWORK_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SASRecognition.h"

@interface SASServerBoundConfusionNetwork : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASRecognition *rawRecognition;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)serverBoundConfusionNetwork;
+(id)serverBoundConfusionNetworkWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif