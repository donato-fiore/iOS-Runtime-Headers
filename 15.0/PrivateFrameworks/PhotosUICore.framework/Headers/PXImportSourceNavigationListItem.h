// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXIMPORTSOURCENAVIGATIONLISTITEM_H
#define PXIMPORTSOURCENAVIGATIONLISTITEM_H

@class UIImage, PHImportSource, PHPhotoLibrary;


#import "PXNavigationListItem.h"

@interface PXImportSourceNavigationListItem : PXNavigationListItem

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) PHImportSource *importSource; // ivar: _importSource
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(BOOL)isRemovable;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)glyphImageName;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 itemCount:(NSInteger)arg2 ;
-(id)initWithImportSource:(id)arg0 photoLibrary:(id)arg1 ;
-(id)representedObject;


@end


#endif