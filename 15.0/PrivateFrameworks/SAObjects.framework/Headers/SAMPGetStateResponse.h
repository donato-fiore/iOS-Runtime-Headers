// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPGETSTATERESPONSE_H
#define SAMPGETSTATERESPONSE_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SAMPMediaItem.h"

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hashedGroupID;
@property (retain, nonatomic) SAMPMediaItem *listeningToItem;
@property (copy, nonatomic) NSNumber *listeningToMusicApplication;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int state;
@property (readonly) Class superclass;


+(id)getStateResponse;
+(id)getStateResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif