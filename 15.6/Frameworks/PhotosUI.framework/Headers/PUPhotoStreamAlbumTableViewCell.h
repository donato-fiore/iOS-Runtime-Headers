// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSTREAMALBUMTABLEVIEWCELL_H
#define PUPHOTOSTREAMALBUMTABLEVIEWCELL_H

@class UITableViewCell, NSString;



@interface PUPhotoStreamAlbumTableViewCell : UITableViewCell

@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *text;


+(CGFloat)cellHeight;
+(CGFloat)labelHorizontalInset;
+(CGFloat)labelXOriginForContentWidth:(CGFloat)arg0 labelWidth:(CGFloat)arg1 isRTL:(BOOL)arg2 ;
-(void)layoutSubviews;


@end


#endif