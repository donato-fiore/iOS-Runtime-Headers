// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBICONGRIDWRAPPERVIEW_H
#define _SBICONGRIDWRAPPERVIEW_H

@class UIImageView;


#import "_SBFolderPageElement.h"
#import "SBFolderIconImageView.h"

@interface _SBIconGridWrapperView : UIImageView

@property (retain, nonatomic) _SBFolderPageElement *element; // ivar: _element
@property (weak, nonatomic) SBFolderIconImageView *folderIconImageView; // ivar: _folderIconImageView


-(void)positionAtRow:(NSUInteger)arg0 ;
-(void)reposition;


@end


#endif