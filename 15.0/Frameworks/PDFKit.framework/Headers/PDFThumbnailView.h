// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFTHUMBNAILVIEW_H
#define PDFTHUMBNAILVIEW_H

@class UIView, UIColor, UIView<PDFThumbnailCollectionViewInterface>, NSArray;
@protocol NSCoding, PDFThumbnailContextMenuDelegate;


#import "PDFView.h"

@interface PDFThumbnailView : UIView <NSCoding>

 {
    PDFView *_pdfView;
    CGSize _thumbnailSize;
    UIColor *_backgroundColor;
    NSInteger _layoutMode;
    UIEdgeInsets _contentInset;
    UIView<PDFThumbnailCollectionViewInterface> *_iconsView;
    NSInteger _style;
}


@property (weak, nonatomic) PDFView *PDFView;
@property (nonatomic) BOOL allowsPageReordering;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) UIEdgeInsets contentInset;
@property (nonatomic) NSInteger layoutMode;
@property (readonly, nonatomic) NSArray *selectedPages;
@property (weak, nonatomic) NSObject<PDFThumbnailContextMenuDelegate> *thumbnailContextMenuDelegate; // ivar: thumbnailContextMenuDelegate
@property (nonatomic) CGSize thumbnailSize;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_commonInitWithStyle:(NSInteger)arg0 ;
-(void)_updateLayout;
-(void)currentPageChanged:(id)arg0 ;
-(void)dealloc;
-(void)documentChanged:(id)arg0 ;
-(void)documentMutated:(id)arg0 ;
-(void)documentUnlocked:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pageChanged:(id)arg0 ;
-(void)setupNotifications;


@end


#endif