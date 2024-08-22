// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWCORESPOTLIGHTUTILITIES_H
#define SWCORESPOTLIGHTUTILITIES_H


#import <Foundation/Foundation.h>


@interface SWCoreSpotlightUtilities : NSObject



+(id)CSQueryStringForAutodonatingChatsWithDecay:(BOOL)arg0 ;
+(id)CSQueryStringForSLHighlightsForContentType:(unsigned char)arg0 forChatIdentifiers:(id)arg1 ;
+(id)CSSearchQueryContextForAutodonatingChats;
+(id)CSSearchQueryContextForSLHighlightsForContentType:(unsigned char)arg0 ;
+(id)fetchCSSearchableItemForUniqueIdentifier:(id)arg0 forContentType:(unsigned char)arg1 withRequiredAttributes:(id)arg2 error:(*id)arg3 ;
+(id)requiredSpotlightAttributeKeysForFiles;
+(id)requiredSpotlightAttributeKeysForLinks;


@end


#endif