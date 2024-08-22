// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETCONTENTVIEWCONTROLLER_H
#define SHSHEETCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, LPLinkView, LPLinkMetadata, NSMutableDictionary, UIViewController<SHSheetContentView>;
@protocol LPLinkViewDelegate, SHSheetContentView, SHSheetContentPresenter, SHSheetSession, SHSheetContentViewModel;


#import "_UIActivityContentTitleView.h"

@interface SHSheetContentViewController : UIViewController <LPLinkViewDelegate, SHSheetContentView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPLinkView *headerLinkView; // ivar: _headerLinkView
@property (readonly, nonatomic) LPLinkMetadata *headerMetadata; // ivar: _headerMetadata
@property (retain, nonatomic) NSMutableDictionary *headerMetadataObservers; // ivar: _headerMetadataObservers
@property (retain, nonatomic) _UIActivityContentTitleView *headerTitleView; // ivar: _headerTitleView
@property (weak, nonatomic) NSObject<SHSheetContentPresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic) UIViewController<SHSheetContentView> *sceneViewController; // ivar: _sceneViewController
@property (readonly, nonatomic) NSObject<SHSheetSession> *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SHSheetContentViewModel> *viewModel; // ivar: _viewModel


-(id)_createLinkView;
-(id)initWithSession:(id)arg0 ;
-(void)_configureHeaderViewIfNeeded;
-(void)_installContentViewController;
-(void)_updateHeaderLinkViewAction;
-(void)_updateHeaderLinkViewSizeClass;
-(void)_updateHeaderMetadata;
-(void)_updateHeaderSize;
-(void)didUpdateAirDropTransferWithChange:(id)arg0 ;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)reloadActivity:(id)arg0 ;
-(void)reloadContent;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithViewModel:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif