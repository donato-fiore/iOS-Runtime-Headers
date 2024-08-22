// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACREATESESSIONINFORESPONSE_H
#define SACREATESESSIONINFORESPONSE_H

@class NSData, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *sessionInfo;
@property (copy, nonatomic) NSNumber *validityDuration;


+(id)createSessionInfoResponse;
+(id)createSessionInfoResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif