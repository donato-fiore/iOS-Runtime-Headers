// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUMEDIASUGGESTIONSCONTROLLER_H
#define MRUMEDIASUGGESTIONSCONTROLLER_H

@class NSCache, NSDate, NSHashTable, MRMediaSuggestionPreferences, MRMediaSuggestionRequest, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRUMediaSuggestionsController : NSObject

@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSDate *lastRequestDate; // ivar: _lastRequestDate
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) MRMediaSuggestionPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) MRMediaSuggestionRequest *request; // ivar: _request
@property (nonatomic) BOOL requestActive; // ivar: _requestActive
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (retain, nonatomic) NSDictionary *suggestions; // ivar: _suggestions


+(NSUInteger)minDisplayItemCount;
+(id)sharedController;
-(id)artworkImageForSuggestion:(id)arg0 ;
-(id)init;
-(id)suggestionsForContext:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)hasTimeOutElapsedForOrigin:(id)arg0 completion:(id)arg1 ;
-(void)notifySuggestionsDidChange:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif