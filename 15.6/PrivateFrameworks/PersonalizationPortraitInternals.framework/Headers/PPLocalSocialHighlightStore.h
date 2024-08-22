// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPLOCALSOCIALHIGHLIGHTSTORE_H
#define PPLOCALSOCIALHIGHLIGHTSTORE_H

@class NSString;
@protocol HVSafariConsumer, HVMessagesConsumer;

#import <Foundation/Foundation.h>

#import "PPSocialHighlightStorage.h"

@interface PPLocalSocialHighlightStore : NSObject <HVSafariConsumer, HVMessagesConsumer>

 {
    PPSocialHighlightStorage *_storage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultStore;
-(BOOL)feedbackForAttribution:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 error:(*id)arg4 ;
-(BOOL)feedbackForHighlight:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 error:(*id)arg4 ;
-(id)attributionForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)consumeMessagesContentWithContext:(id)arg0 ;
-(id)consumeSafariContentWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;
-(id)init;
-(id)initWithStorage:(id)arg0 ;
-(id)rankedHighlightsForSyncedItems:(id)arg0 client:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)rankedHighlightsWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 error:(*id)arg4 ;


@end


#endif