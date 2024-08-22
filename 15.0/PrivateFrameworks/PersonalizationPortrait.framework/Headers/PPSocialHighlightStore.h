// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOCIALHIGHLIGHTSTORE_H
#define PPSOCIALHIGHLIGHTSTORE_H


#import <Foundation/Foundation.h>


@interface PPSocialHighlightStore : NSObject



+(CGFloat)decayInterval;
-(BOOL)iterRankedHighlightsForSyncedItems:(id)arg0 client:(id)arg1 variant:(id)arg2 error:(*id)arg3 block:(id)arg4 ;
-(BOOL)iterRankedHighlightsWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 error:(*id)arg3 block:(id)arg4 ;
-(id)attributionForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)feedbackForAttributionIdentifier:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 completion:(id)arg4 ;
-(void)feedbackForHighlightIdentifier:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 completion:(id)arg4 ;
-(void)feedbackForHighlightResourceURL:(id)arg0 resolvedURL:(id)arg1 type:(NSUInteger)arg2 client:(id)arg3 variant:(id)arg4 completion:(id)arg5 ;


@end


#endif