// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETGROUPACTIVITYSHARINGCONTROLLER_H
#define SHSHEETGROUPACTIVITYSHARINGCONTROLLER_H

@class UIViewController, UIViewController<GPGroupActivitySharingControllerHelpers>, NSString;
@protocol SHSheetGroupActivitySharingControllerDelegate;



@interface SHSheetGroupActivitySharingController : UIViewController

@property (weak, nonatomic) NSObject<SHSheetGroupActivitySharingControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIViewController<GPGroupActivitySharingControllerHelpers> *groupActivitySharingController; // ivar: _groupActivitySharingController
@property (copy, nonatomic) NSString *shareSheetSessionID; // ivar: _shareSheetSessionID


-(id)initWithItemProvider:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif