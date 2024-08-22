// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONECALLSTARTED_H
#define SAPHONECALLSTARTED_H

@class NSString, NSURL;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAPhoneCallStarted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *phoneLogId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)callStarted;
+(id)callStartedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif