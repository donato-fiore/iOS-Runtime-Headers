// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUONEUPLIVEPHOTOVARIATIONSSUGGESTIONSPROVIDER_H
#define PUONEUPLIVEPHOTOVARIATIONSSUGGESTIONSPROVIDER_H

@class NSString, NSMutableDictionary;
@protocol PXChangeObserver;


#import "PUOneUpSuggestionsProvider.h"

@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *infos; // ivar: _infos
@property (readonly) Class superclass;


-(BOOL)canProvideSuggestionForAsset:(id)arg0 ;
-(NSInteger)_recommendedVariationTypeForAsset:(id)arg0 ;
-(id)init;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif