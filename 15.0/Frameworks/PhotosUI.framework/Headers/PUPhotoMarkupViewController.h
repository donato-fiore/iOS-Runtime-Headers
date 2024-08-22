// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOMARKUPVIEWCONTROLLER_H
#define PUPHOTOMARKUPVIEWCONTROLLER_H

@class UIViewController, MarkupViewController, NSURL, NSString;
@protocol MarkupViewControllerDelegate;


#import "PUObserverRegistry.h"
#import "PUMediaProvider.h"
#import "PUReviewAsset.h"

@interface PUPhotoMarkupViewController : UIViewController <MarkupViewControllerDelegate>



@property (readonly, nonatomic) MarkupViewController *_markupViewController; // ivar: __markupViewController
@property (readonly, nonatomic) PUObserverRegistry *_observerRegistry; // ivar: __observerRegistry
@property (nonatomic, setter=_setSourceImageVersion:) NSInteger _sourceImageVersion; // ivar: __sourceImageVersion
@property (copy, nonatomic, setter=_setWorkaroundInputWriteURL:) NSURL *_workaroundInputWriteURL; // ivar: __workaroundInputWriteURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PUReviewAsset *reviewAsset; // ivar: _reviewAsset
@property (readonly) Class superclass;


-(id)controller:(id)arg0 willSetToolbarItems:(id)arg1 ;
-(id)initWithReviewAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_notifyObserversDidFinishWithSavedAsset:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif