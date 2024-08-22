// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBFOLDERPAGEELEMENT_H
#define _SBFOLDERPAGEELEMENT_H


#import <Foundation/Foundation.h>

#import "SBFolderIcon.h"
#import "SBIconGridImage.h"

@interface _SBFolderPageElement : NSObject

@property (weak, nonatomic) SBFolderIcon *folderIcon; // ivar: _folderIcon
@property (retain, nonatomic) SBIconGridImage *gridImage; // ivar: _gridImage
@property (nonatomic, getter=isGridImagePossible) BOOL gridImagePossible; // ivar: _gridImagePossible
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (nonatomic) NSUInteger visibleRow; // ivar: _visibleRow


-(NSUInteger)firstVisibleMiniIconIndex;
-(NSUInteger)firstVisibleRowForGap;


@end


#endif