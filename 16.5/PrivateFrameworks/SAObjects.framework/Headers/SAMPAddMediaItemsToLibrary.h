// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPADDMEDIAITEMSTOLIBRARY_H
#define SAMPADDMEDIAITEMSTOLIBRARY_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SAMPCollection.h"

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;
@property (retain, nonatomic) SAMPCollection *mediaItems;


+(id)addMediaItemsToLibrary;
+(id)addMediaItemsToLibraryWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif