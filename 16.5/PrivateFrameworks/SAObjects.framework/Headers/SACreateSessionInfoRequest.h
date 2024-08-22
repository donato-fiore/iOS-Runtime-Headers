// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACREATESESSIONINFOREQUEST_H
#define SACREATESESSIONINFOREQUEST_H

@class NSString, NSNumber, NSData;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SACreateSessionInfoRequest : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *deviceAuthVersion;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSData *sessionInfoRequest;
@property (readonly) Class superclass;


+(id)createSessionInfoRequest;
+(id)createSessionInfoRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif