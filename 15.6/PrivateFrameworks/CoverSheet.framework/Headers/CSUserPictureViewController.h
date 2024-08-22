// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSUSERPICTUREVIEWCONTROLLER_H
#define CSUSERPICTUREVIEWCONTROLLER_H

@class UMUser, NSString;
@protocol CSEventHandling;


#import "CSCoverSheetViewControllerBase.h"
#import "CSUserPictureView.h"

@interface CSUserPictureViewController : CSCoverSheetViewControllerBase <CSEventHandling>

 {
    UMUser *_user;
    CSUserPictureView *_userPictureView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isUserPictureSupported;
+(Class)viewClass;
-(BOOL)handleEvent:(id)arg0 ;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationType;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)view;
-(void)aggregateAppearance:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif