// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPLIKESMEDIAENTITY_H
#define SAMPLIKESMEDIAENTITY_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAMPLikesMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedSharedUserId;


+(id)likesMediaEntity;
+(id)likesMediaEntityWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif