// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFOLDERCONTAINERVIEW_H
#define SBFOLDERCONTAINERVIEW_H

@class SBFTouchPassThroughView, UIView;


#import "SBFolderContainerView.h"
#import "SBFolderView.h"

@interface SBFolderContainerView : SBFTouchPassThroughView {
    SBFolderContainerView *_childFolderContainerView;
}


@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) SBFolderContainerView *childFolderContainerView;
@property (readonly, nonatomic) SBFolderView *folderView; // ivar: _folderView
@property (nonatomic) CGFloat statusBarHeight; // ivar: _statusBarHeight


-(id)initWithFolderView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForFolderView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif