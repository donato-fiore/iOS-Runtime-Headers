// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSBASESOURCE_H
#define MAPSSUGGESTIONSBASESOURCE_H

@class NSString;
@protocol MapsSuggestionsSource, MapsSuggestionsSourceDelegate;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource>

 {
    NSString *_name;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MapsSuggestionsSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
+(NSUInteger)disposition;
-(BOOL)canProduceEntriesOfType:(NSInteger)arg0 ;
-(BOOL)removeEntry:(id)arg0 behavior:(NSInteger)arg1 handler:(id)arg2 ;
-(CGFloat)updateSuggestionEntriesOfType:(NSInteger)arg0 handler:(id)arg1 ;
-(CGFloat)updateSuggestionEntriesWithHandler:(id)arg0 ;
-(NSUInteger)addOrUpdateMySuggestionEntries:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 name:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 name:(id)arg1 ;
-(void)feedbackForContact:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForEntry:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForMapItem:(id)arg0 action:(NSInteger)arg1 ;
-(void)start;
-(void)stop;


@end


#endif