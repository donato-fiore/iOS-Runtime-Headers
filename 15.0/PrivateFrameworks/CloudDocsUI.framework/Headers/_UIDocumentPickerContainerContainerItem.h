// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERCONTAINERCONTAINERITEM_H
#define _UIDOCUMENTPICKERCONTAINERCONTAINERITEM_H

@class UIDocumentPickerContainerItem, NSString, BRContainer;



@interface _UIDocumentPickerContainerContainerItem : UIDocumentPickerContainerItem {
    NSString *_cachedSubtitle;
    BRContainer *_container;
}


@property (readonly, nonatomic) BRContainer *container;


-(NSInteger)type;
-(id)_blockingThumbnailWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 wantsBorder:(*BOOL)arg2 ;
-(id)initWithContainer:(id)arg0 ;
-(id)modificationDate;
-(id)sortPath;
-(id)subtitle;
-(id)title;
-(id)url;
-(void)_modelChanged;


@end


#endif