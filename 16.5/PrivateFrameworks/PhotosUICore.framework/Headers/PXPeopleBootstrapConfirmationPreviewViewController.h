// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEBOOTSTRAPCONFIRMATIONPREVIEWVIEWCONTROLLER_H
#define PXPEOPLEBOOTSTRAPCONFIRMATIONPREVIEWVIEWCONTROLLER_H

@class UIViewController, PHAsset, PHPerson;



@interface PXPeopleBootstrapConfirmationPreviewViewController : UIViewController

@property (readonly, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (nonatomic) int requestID; // ivar: _requestID
@property (readonly, nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode


-(id)initWithPerson:(id)arg0 keyAsset:(id)arg1 useLowMemoryMode:(BOOL)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif