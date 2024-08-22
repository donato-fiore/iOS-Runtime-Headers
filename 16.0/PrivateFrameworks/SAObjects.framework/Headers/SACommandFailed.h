// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACOMMANDFAILED_H
#define SACOMMANDFAILED_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SAClientBoundCommand;


#import "SABaseClientBoundCommand.h"

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *turnId;


+(id)commandFailed;
+(id)commandFailedWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)commandFailedWithErrorCode:(NSInteger)arg0 ;
+(id)commandFailedWithReason:(id)arg0 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithErrorCode:(NSInteger)arg0 ;
-(id)initWithReason:(id)arg0 ;


@end


#endif