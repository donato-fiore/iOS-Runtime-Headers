// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCHLSPLAYLIST_H
#define FCHLSPLAYLIST_H

@class NSArray, NSDictionary, NSMutableSet, NSString;
@protocol FCM3U8ParserDelegate;

#import <Foundation/Foundation.h>

#import "FCHLSPlaylistState.h"

@interface FCHLSPlaylist : NSObject <FCM3U8ParserDelegate>

 {
    BOOL _independentSegments;
    NSArray *_groups;
    NSArray *_streamInfs;
    NSArray *_segments;
    NSDictionary *_sessionData;
    FCHLSPlaylistState *_state;
    NSMutableSet *_uniqueKeys;
    NSArray *_requestedBitrates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)parserShouldCollectLine:(id)arg0 ;
-(void)parser:(id)arg0 lineIsComment:(id)arg1 ;
-(void)parser:(id)arg0 lineIsTag:(id)arg1 value:(id)arg2 attributeList:(id)arg3 ;
-(void)parser:(id)arg0 lineIsURL:(id)arg1 ;


@end


#endif