// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUMEDIASUGGESTIONSPULLDATASOURCE_H
#define MRUMEDIASUGGESTIONSPULLDATASOURCE_H

@class NSString, NSDate, NSDictionary, MRMediaSuggestionPreferences, MRMediaSuggestionRequest;
@protocol MRUMediaSuggestionsDataSource, MRUMediaSuggestionsDataSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRUMediaSuggestionsPullDataSource : NSObject <MRUMediaSuggestionsDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUMediaSuggestionsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastRequestDate; // ivar: _lastRequestDate
@property (retain, nonatomic) NSDictionary *mediaSuggestions; // ivar: _mediaSuggestions
@property (retain, nonatomic) MRMediaSuggestionPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) MRMediaSuggestionRequest *request; // ivar: _request
@property (nonatomic) BOOL requestActive; // ivar: _requestActive
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (readonly) Class superclass;


-(id)init;
-(void)refreshMediaSuggestions;


@end


#endif