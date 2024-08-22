// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACLIENTSETUPINFO_H
#define SACLIENTSETUPINFO_H



#import "SABaseClientBoundCommand.h"

@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (nonatomic) BOOL delay;
@property (nonatomic) CGFloat threshold;


+(id)clientSetupInfo;
+(id)clientSetupInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif