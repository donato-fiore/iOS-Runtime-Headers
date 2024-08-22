// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPSTEERMUSIC_H
#define SAMPSTEERMUSIC_H

@class NSArray, NSString;


#import "SADomainCommand.h"
#import "SAMPCollection.h"
#import "SAMPMediaItem.h"

@interface SAMPSteerMusic : SADomainCommand

@property (retain, nonatomic) SAMPCollection *currentListeningToCollection;
@property (retain, nonatomic) SAMPMediaItem *currentListeningToItem;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *steerableBlob;


+(id)steerMusic;
+(id)steerMusicWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif