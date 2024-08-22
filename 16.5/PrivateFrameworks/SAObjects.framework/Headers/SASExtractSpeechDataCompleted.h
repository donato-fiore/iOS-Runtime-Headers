// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASEXTRACTSPEECHDATACOMPLETED_H
#define SASEXTRACTSPEECHDATACOMPLETED_H

@class NSString, NSData;
@protocol SAAceSerializable;


#import "SADomainCommand.h"

@interface SASExtractSpeechDataCompleted : SADomainCommand <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *speechData;
@property (copy, nonatomic) NSString *speechDataUrl;
@property (readonly) Class superclass;


+(id)extractSpeechDataCompleted;
+(id)extractSpeechDataCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif