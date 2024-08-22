// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKOPAQUEFILEVIEWCONTROLLER_H
#define FBKOPAQUEFILEVIEWCONTROLLER_H

@class UIViewController, UILabel, UIImageView, DEDAttachmentItem;



@interface FBKOpaqueFileViewController : UIViewController

@property (weak, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (weak, nonatomic) UILabel *fileNameLabel; // ivar: _fileNameLabel
@property (weak, nonatomic) UILabel *fileSizeLabel; // ivar: _fileSizeLabel
@property (weak, nonatomic) UIImageView *icon; // ivar: _icon
@property (retain, nonatomic) DEDAttachmentItem *item; // ivar: _item


+(BOOL)shouldDisplayItem:(id)arg0 ;
-(BOOL)showsItem;
-(void)didTapView;
-(void)showShareSheet;
-(void)viewDidLoad;


@end


#endif