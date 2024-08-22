// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANPGETNOWPLAYINGQUEUEDETAILSRESPONSE_H
#define SANPGETNOWPLAYINGQUEUEDETAILSRESPONSE_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SABackgroundContextObject;


#import "SABaseCommand.h"

@interface SANPGetNowPlayingQueueDetailsResponse : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *nextItems;
@property (copy, nonatomic) NSArray *previousItems;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)getNowPlayingQueueDetailsResponse;
+(id)getNowPlayingQueueDetailsResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif