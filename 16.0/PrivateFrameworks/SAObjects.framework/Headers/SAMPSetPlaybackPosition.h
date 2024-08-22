// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPSETPLAYBACKPOSITION_H
#define SAMPSETPLAYBACKPOSITION_H



#import "SADomainCommand.h"

@interface SAMPSetPlaybackPosition : SADomainCommand

@property (nonatomic) int position;


+(id)setPlaybackPosition;
+(id)setPlaybackPositionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif