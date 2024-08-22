// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTACTIONSSUGGESTIONSENDER_H
#define ATXSPOTLIGHTACTIONSSUGGESTIONSENDER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXSpotlightActionsSuggestionSender : NSObject {
    NSString *_previousOngoingCallIdentifier;
    NSString *_previousNowPlayingIdentifier;
    NSDictionary *_previousDirectionsIdentifiers;
}




+(id)identifierForNowPlayingSuggestionFromLayout:(id)arg0 ;
+(id)identifierForOngoingCallSuggestionFromLayout:(id)arg0 ;
+(id)identifiersForDirectionsSuggestionFromLayout:(id)arg0 ;
-(id)init;
-(void)blendingLayerDidUpdateSpotlightUICache:(id)arg0 ;


@end


#endif