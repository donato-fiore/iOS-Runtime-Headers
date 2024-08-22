// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUSUGGESTIONONEUPGESTUREPROVIDER_H
#define PXFORYOUSUGGESTIONONEUPGESTUREPROVIDER_H

@class NSArray, UILongPressGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;


#import "PXGestureProvider.h"
#import "PXForYouSuggestionAssetsDataSourceManager.h"

@interface PXForYouSuggestionOneupGestureProvider : PXGestureProvider <UIGestureRecognizerDelegate>

 {
    NSArray *_gestureRecognizers;
    UILongPressGestureRecognizer *_longPressRecognizer;
}


@property (readonly, nonatomic) PXForYouSuggestionAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)gestureRecognizers;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_createGestureRecognizersIfNeeded;
-(void)_handleLongPress:(id)arg0 ;
-(void)_startShowingOriginal;
-(void)_stopShowingOriginal;
-(void)hostingViewDidChange;


@end


#endif