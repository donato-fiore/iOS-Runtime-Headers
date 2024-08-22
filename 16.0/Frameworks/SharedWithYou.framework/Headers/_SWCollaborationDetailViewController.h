// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWCOLLABORATIONDETAILVIEWCONTROLLER_H
#define _SWCOLLABORATIONDETAILVIEWCONTROLLER_H

@class UIViewController, NSItemProvider;
@protocol UICloudSharingControllerDelegate;

#import <Foundation/Foundation.h>

#import "SWHighlight.h"
#import "SWCollaborationDetailViewModel.h"

@interface _SWCollaborationDetailViewController : UIViewController

@property (weak, nonatomic) NSObject<UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (weak, nonatomic) NSObject<UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (nonatomic, retain) SWHighlight *collaborationHighlight;
@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) UIViewController *typeErasedHostingController; // ivar: _typeErasedHostingController
@property (retain, nonatomic) UIViewController *typeErasedHostingController;
@property (retain, nonatomic) NSObject *typeErasedViewModel; // ivar: _typeErasedViewModel
@property (retain, nonatomic) NSObject *typeErasedViewModel;
@property (nonatomic, retain) SWCollaborationDetailViewModel *viewModel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 listContent:(id)arg1 ;
-(id)initWithItemProvider:(id)arg0 ;
-(id)initWithItemProvider_impl:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setListContent:(id)arg0 ;
-(void)setListContentView:(id)arg0 ;
-(void)setManageButtonTitle:(id)arg0 ;
-(void)setShowManageButton:(BOOL)arg0 ;


@end


#endif