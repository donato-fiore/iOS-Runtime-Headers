// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHQUICKNOTEACTIVITY_H
#define SHQUICKNOTEACTIVITY_H

@class NSArray, NSString, UIViewController<ICSystemPaperExtensionHostViewController>;
@protocol ICSystemPaperPresentationDelegate, OS_dispatch_queue;


#import "UIActivity.h"

@interface SHQuickNoteActivity : UIActivity <ICSystemPaperPresentationDelegate>

 {
    NSObject<OS_dispatch_queue> *_queryQueue;
    uint8_t _isQuickNoteExtensionInstalled;
    uint8_t _canOpenFromManagedToUnmanaged;
}


@property (nonatomic) BOOL _hasSupportedShareableItems; // ivar: __hasSupportedShareableItems
@property (nonatomic) BOOL _hasUserActivityCurrent; // ivar: __hasUserActivityCurrent
@property (copy, nonatomic) NSArray *_imageFileURLs; // ivar: __imageFileURLs
@property (copy, nonatomic) NSArray *_images; // ivar: __images
@property (copy, nonatomic) NSArray *_urls; // ivar: __urls
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isQuickNoteExtensionInstalled;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController<ICSystemPaperExtensionHostViewController> *systemPaperViewController; // ivar: _systemPaperViewController


+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_managesOwnPresentation;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)canOpenFromManagedToUnmanaged;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)init;
-(void)_configureQuickNotePresentationDelegateWithPresenterViewController:(id)arg0 ;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)systemPaperDidFinishWithError:(id)arg0 ;


@end


#endif