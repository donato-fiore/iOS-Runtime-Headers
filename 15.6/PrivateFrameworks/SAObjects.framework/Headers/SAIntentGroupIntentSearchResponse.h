// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPINTENTSEARCHRESPONSE_H
#define SAINTENTGROUPINTENTSEARCHRESPONSE_H

@class NSString, NSArray;
@protocol SAClientBoundCommand;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupIntentSearchResponse : SABaseClientBoundCommand <SAClientBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)intentSearchResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif