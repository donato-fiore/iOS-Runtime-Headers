// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFORYOUSUGGESTIONSAVEACTIONPERFORMER_H
#define PUFORYOUSUGGESTIONSAVEACTIONPERFORMER_H



#import "PUForYouSuggestionActionPerformer.h"

@interface PUForYouSuggestionSaveActionPerformer : PUForYouSuggestionActionPerformer

@property (readonly, nonatomic) BOOL isReverting; // ivar: _isReverting


-(id)initWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 isReverting:(BOOL)arg1 ;
-(void)_dismissPresentedViewController:(id)arg0 ;
-(void)_displayFailureAlert;
-(void)_handleSuccess:(BOOL)arg0 ;
-(void)_performImageSaveWithCompletionHandler:(id)arg0 ;
-(void)_performLivePhotoSaveWithCompletionHandler:(id)arg0 ;
-(void)_performLoopingVideoSaveWithCompletionHandler:(id)arg0 ;
-(void)_updateSuggestionState;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif