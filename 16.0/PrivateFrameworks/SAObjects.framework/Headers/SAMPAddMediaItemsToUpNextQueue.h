// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPADDMEDIAITEMSTOUPNEXTQUEUE_H
#define SAMPADDMEDIAITEMSTOUPNEXTQUEUE_H

@class NSArray, NSString;


#import "SABaseClientBoundCommand.h"
#import "SAMPCollection.h"

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *insertLocation;
@property (retain, nonatomic) SAMPCollection *mediaCollection;
@property (copy, nonatomic) NSString *musicAccountSharedUserId;
@property (copy, nonatomic) NSString *speakerSharedUserId;


+(id)addMediaItemsToUpNextQueue;
+(id)addMediaItemsToUpNextQueueWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif