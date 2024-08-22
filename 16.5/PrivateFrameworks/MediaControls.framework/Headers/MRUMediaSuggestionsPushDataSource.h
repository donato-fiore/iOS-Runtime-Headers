// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUMEDIASUGGESTIONSPUSHDATASOURCE_H
#define MRUMEDIASUGGESTIONSPUSHDATASOURCE_H

@class NSString, NSDictionary, MRMediaSuggestionController;
@protocol MRMediaSuggestionControllerDelegate, MRUMediaSuggestionsDataSource, MRUMediaSuggestionsDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface MRUMediaSuggestionsPushDataSource : NSObject <MRMediaSuggestionControllerDelegate, MRUMediaSuggestionsDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUMediaSuggestionsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *mediaSuggestions; // ivar: _mediaSuggestions
@property (retain, nonatomic) MRMediaSuggestionController *mediaSuggestionsController; // ivar: _mediaSuggestionsController
@property (readonly) Class superclass;


-(id)init;
-(void)controller:(id)arg0 didFailWithError:(id)arg1 ;
-(void)controller:(id)arg0 didUpdateSuggestions:(id)arg1 ;
-(void)refreshMediaSuggestions;


@end


#endif