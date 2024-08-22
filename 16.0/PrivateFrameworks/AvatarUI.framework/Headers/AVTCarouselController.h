// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCAROUSELCONTROLLER_H
#define AVTCAROUSELCONTROLLER_H

@class UIViewController, UIView, NSString, AVTView, AVTRecordView;
@protocol AVTAvatarActionsViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarDisplayingControllerDelegate, AVTAvatarRecordDataSourceObserver, AVTRecordingCarouselController, AVTDisplayingCarouselController, AVTAvatarDisplayingController, AVTAvatarRecord, AVTDisplayingCarouselControllerDelegate, AVTUILogger, AVTPresenterDelegate, AVTRecordingCarouselControllerDelegate;


#import "AVTViewCarouselLayout.h"
#import "AVTViewSession.h"
#import "AVTViewSessionProvider.h"
#import "AVTAvatarRecordDataSource.h"
#import "AVTUIEnvironment.h"
#import "AVTMultiAvatarController.h"
#import "AVTSingleAvatarController.h"

@interface AVTCarouselController : UIViewController <AVTAvatarActionsViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarDisplayingControllerDelegate, AVTAvatarRecordDataSourceObserver, AVTRecordingCarouselController, AVTDisplayingCarouselController>



@property (nonatomic) BOOL allowsCreate;
@property (retain, nonatomic) NSObject<AVTAvatarDisplayingController> *avatarDisplayingController; // ivar: _avatarDisplayingController
@property (retain, nonatomic) UIView *avtViewContainer; // ivar: _avtViewContainer
@property (retain, nonatomic) AVTViewCarouselLayout *avtViewLayout; // ivar: _avtViewLayout
@property (retain, nonatomic) AVTViewSession *avtViewSession; // ivar: _avtViewSession
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // ivar: _avtViewSessionProvider
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *currentAvatarRecord; // ivar: _currentAvatarRecord
@property (readonly, nonatomic) AVTAvatarRecordDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat decelerationRate; // ivar: _decelerationRate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AVTDisplayingCarouselControllerDelegate> *displayingDelegate; // ivar: displayingDelegate
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) AVTView *focusedDisplayView;
@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *focusedRecord;
@property (readonly, nonatomic) AVTRecordView *focusedRecordingView;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPostponingBeginSession; // ivar: _isPostponingBeginSession
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) AVTMultiAvatarController *multiAvatarController; // ivar: _multiAvatarController
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (weak, nonatomic) NSObject<AVTRecordingCarouselControllerDelegate> *recordingDelegate; // ivar: recordingDelegate
@property (retain, nonatomic) AVTSingleAvatarController *singleAvatarController; // ivar: _singleAvatarController
@property (nonatomic) BOOL singleAvatarMode; // ivar: _singleAvatarMode
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(id)displayingCarouselForRecordDataSource:(id)arg0 ;
+(id)recordingCarouselForRecordDataSource:(id)arg0 ;
+(id)sessionProviderForMode:(NSInteger)arg0 environment:(id)arg1 ;
-(id)avatarActionsViewController:(id)arg0 recordUpdateForDeletingRecord:(id)arg1 ;
-(id)initWithMode:(NSInteger)arg0 dataSource:(id)arg1 ;
-(id)initWithMode:(NSInteger)arg0 sessionProvider:(id)arg1 dataSource:(id)arg2 environment:(id)arg3 ;
-(id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg0 size:(struct CGSize )arg1 ;
-(void)avatarActionsViewControllerDidFinish:(id)arg0 ;
-(void)avatarEditorViewController:(id)arg0 didFinishWithAvatarRecord:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg0 ;
-(void)beginAVTViewSession;
-(void)dataSource:(id)arg0 didAddRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dataSource:(id)arg0 didEditRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dataSource:(id)arg0 didRemoveRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)didBeginFocus:(id)arg0 ;
-(void)didEndFocus:(id)arg0 ;
-(void)displayAvatarRecord:(id)arg0 animated:(BOOL)arg1 ;
-(void)displayAvatarRecordWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)displayingController:(id)arg0 didChangeCurrentRecord:(id)arg1 ;
-(void)displayingController:(id)arg0 didMoveTowardRecord:(id)arg1 withFactor:(CGFloat)arg2 ;
-(void)displayingControllerWantsToPresentEditorForCreation:(id)arg0 ;
-(void)loadView;
-(void)notifyDelegateDidFocusRecord:(id)arg0 avtView:(id)arg1 ;
-(void)notifyDelegateDidUpdateWithRecord:(id)arg0 ;
-(void)notifyDelegateNearnessFactorDidChange:(CGFloat)arg0 towardRecord:(id)arg1 ;
-(void)notifyDelegateWillEndFocusOnRecord:(id)arg0 avtView:(id)arg1 ;
-(void)presentActionsForAvatar:(id)arg0 ;
-(void)presentEditorForCreatingAvatar:(id)arg0 ;
-(void)reloadData;
-(void)reloadDataCenteringToAvatarRecord:(id)arg0 ;
-(void)setupAVTView:(id)arg0 ;
-(void)showMultiAvatarControllerAnimated:(BOOL)arg0 ;
-(void)showSingleAvatarControllerAnimated:(BOOL)arg0 ;
-(void)significantRecordChangeInDataSource:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBeginFocus:(id)arg0 ;
-(void)willEndFocus:(id)arg0 ;
-(void)wrapAndPresentViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif