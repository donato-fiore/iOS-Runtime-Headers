// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTONEUPPREVIEWINGVIEWCONTROLLER_H
#define PUIMPORTONEUPPREVIEWINGVIEWCONTROLLER_H

@class UIViewController, PXImportItemViewModel, PXImportMediaProvider;


#import "PUImportOneUpTransitionView.h"

@interface PUImportOneUpPreviewingViewController : UIViewController

@property (retain, nonatomic) PXImportItemViewModel *importItemViewModel; // ivar: _importItemViewModel
@property (retain, nonatomic) PXImportMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) PUImportOneUpTransitionView *previewView; // ivar: _previewView


-(id)initWithImportItemViewModel:(id)arg0 startingImage:(id)arg1 mediaProvider:(id)arg2 ;
-(struct CGSize )sizeForImportItemViewModel:(id)arg0 ;
-(void)updatePreferredContentSize;
-(void)viewDidLoad;


@end


#endif