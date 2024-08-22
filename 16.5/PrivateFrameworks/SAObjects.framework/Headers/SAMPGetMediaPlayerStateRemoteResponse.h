// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPGETMEDIAPLAYERSTATEREMOTERESPONSE_H
#define SAMPGETMEDIAPLAYERSTATEREMOTERESPONSE_H

@class NSString, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAMPGetMediaPlayerStateRemoteResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSDictionary *routeResponses;
@property (readonly) Class superclass;


+(id)getMediaPlayerStateRemoteResponse;
+(id)getMediaPlayerStateRemoteResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif