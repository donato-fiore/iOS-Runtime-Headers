// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKVISUALSEARCHVIEWCONTROLLER_H
#define VKVISUALSEARCHVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSArray;
@protocol VKVisualSearchViewControllerDelegate;


#import "VKCVisualSearchResult.h"

@interface VKVisualSearchViewController : UIViewController

@property (weak, nonatomic) NSObject<VKVisualSearchViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didShowResults; // ivar: _didShowResults
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult; // ivar: _visualSearchResult
@property (copy, nonatomic) NSArray *visualSearchResultItems; // ivar: _visualSearchResultItems


-(id)_resultSectionsForRecognitionResult:(id)arg0 ;
-(id)_resultSectionsForRecognitionResultItems:(id)arg0 ;
-(id)initWithImage:(struct CGImage *)arg0 ;
-(id)initWithVisualSearchResultItems:(id)arg0 ;
-(void)_showVisualSearchViewController;
-(void)presentSearchViewControllerForSections:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif