// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSSUPPRESSOR_H
#define MAPSSUGGESTIONSSUPPRESSOR_H

@class NSMutableDictionary, NSString;
@protocol MapsSuggestionsObject;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsQueue.h"

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject>

 {
    NSMutableDictionary *_suppressionEntries;
    NSString *_suppressionEntriesFilePath;
    MapsSuggestionsQueue *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isSuppressedEntry:(id)arg0 ;
-(BOOL)loadSuppressedEntries;
-(BOOL)saveSuppressedEntries;
-(BOOL)suppressEntry:(id)arg0 forTime:(CGFloat)arg1 ;
-(id)init;
-(id)initWithFilePath:(id)arg0 ;
-(id)test_dateUntilSuppressedEntry:(id)arg0 ;
-(void)awaitQueue;
-(void)purge;
-(void)test_deleteSuppressedEntriesFile;


@end


#endif