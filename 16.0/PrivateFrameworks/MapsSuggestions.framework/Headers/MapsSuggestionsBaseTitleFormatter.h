// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSBASETITLEFORMATTER_H
#define MAPSSUGGESTIONSBASETITLEFORMATTER_H

@class NSString;
@protocol MapsSuggestionsTitleFormatter;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsBaseTitleFormatter : NSObject <MapsSuggestionsTitleFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)resetTitlesForEntry:(id)arg0 ;


@end


#endif