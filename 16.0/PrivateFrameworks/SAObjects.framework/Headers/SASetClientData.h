// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETCLIENTDATA_H
#define SASETCLIENTDATA_H

@class NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SASetClientData : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;


+(id)setClientData;
+(id)setClientDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif