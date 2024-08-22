// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDIALOGCONTENTLISTITEM_H
#define WFDIALOGCONTENTLISTITEM_H

@class WFDialogListItem, NSData, WFContentItem, WFImage, NSString;
@protocol NSSecureCoding;



@interface WFDialogContentListItem : WFDialogListItem <NSSecureCoding>



@property (retain, nonatomic) NSData *archivedContentItem; // ivar: _archivedContentItem
@property (retain, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (nonatomic) BOOL hideSubtitle; // ivar: _hideSubtitle
@property (retain, nonatomic) WFImage *image; // ivar: _image
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle


+(BOOL)supportsSecureCoding;
-(BOOL)loadAltTextWithCompletion:(id)arg0 ;
-(BOOL)loadImageWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(BOOL)loadSubtitleWithCompletion:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentItem:(id)arg0 selected:(BOOL)arg1 hideSubtitle:(BOOL)arg2 ;
-(id)initWithContentItem:(id)arg0 selected:(BOOL)arg1 serializedPossibleState:(id)arg2 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 selected:(BOOL)arg3 contentItem:(id)arg4 hideSubtitle:(BOOL)arg5 serializedPossibleState:(id)arg6 ;
-(void)_loadContentItemWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForDisplayWithCompletionHandler:(id)arg0 ;


@end


#endif