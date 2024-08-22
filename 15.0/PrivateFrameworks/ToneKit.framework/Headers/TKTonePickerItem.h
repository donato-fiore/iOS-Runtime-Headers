// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKTONEPICKERITEM_H
#define TKTONEPICKERITEM_H

@class NSArray, NSString;
@protocol TKPickerContainerItem;


#import "TKPickerSelectableItem.h"
#import "TKTonePickerSectionItem.h"

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem>



@property (copy, nonatomic, setter=_setChildrenToneClassicsPickerItems:) NSArray *childrenToneClassicsPickerItems; // ivar: _childrenToneClassicsPickerItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress; // ivar: _downloadProgress
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setItemKind:) NSUInteger itemKind; // ivar: _itemKind
@property (nonatomic, setter=_setNeedsActivityIndicator:) BOOL needsActivityIndicator; // ivar: _needsActivityIndicator
@property (nonatomic, setter=_setNeedsDownloadProgress:) BOOL needsDownloadProgress; // ivar: _needsDownloadProgress
@property (nonatomic, setter=_setNeedsRoomForCheckmark:) BOOL needsRoomForCheckmark; // ivar: _needsRoomForCheckmark
@property (readonly, nonatomic) NSInteger numberOfChildren;
@property (weak, nonatomic, setter=_setParentSectionItem:) TKTonePickerSectionItem *parentSectionItem; // ivar: _parentSectionItem
@property (readonly) Class superclass;


-(id)childItemAtIndex:(NSInteger)arg0 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg0 ;


@end


#endif