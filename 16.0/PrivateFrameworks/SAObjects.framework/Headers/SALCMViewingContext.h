// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALCMVIEWINGCONTEXT_H
#define SALCMVIEWINGCONTEXT_H

@class NSNumber, NSString, NSArray;


#import "SADomainObject.h"
#import "SALCMContent.h"

@interface SALCMViewingContext : SADomainObject

@property (nonatomic) BOOL commercialPlaying;
@property (copy, nonatomic) NSNumber *durationInMilliseconds;
@property (retain, nonatomic) SALCMContent *nowPlaying;
@property (copy, nonatomic) NSString *nowPlayingAppId;
@property (nonatomic) BOOL paused;
@property (copy, nonatomic) NSNumber *playbackPositionInMilliseconds;
@property (copy, nonatomic) NSArray *viewingHistory;


+(id)viewingContext;
+(id)viewingContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif