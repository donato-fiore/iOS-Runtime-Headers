// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSEVENTKITCHANGEDTRIGGER_H
#define MAPSSUGGESTIONSEVENTKITCHANGEDTRIGGER_H

@class NSString;
@protocol MapsSuggestionsEventKitObserver;


#import "MapsSuggestionsBaseTrigger.h"
#import "MapsSuggestionsEventKit.h"

@interface MapsSuggestionsEventKitChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsEventKitObserver>

 {
    MapsSuggestionsEventKit *_eventKit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithEventKit:(id)arg0 ;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)eventKitDidChange:(id)arg0 ;


@end


#endif