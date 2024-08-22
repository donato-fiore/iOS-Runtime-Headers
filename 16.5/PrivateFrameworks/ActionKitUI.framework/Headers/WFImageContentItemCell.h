// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFIMAGECONTENTITEMCELL_H
#define WFIMAGECONTENTITEMCELL_H

@class UITableViewCell, NSMapTable, NSMutableArray, NSArray;
@protocol WFImageContentItemCellDelegate;



@interface WFImageContentItemCell : UITableViewCell {
    NSMapTable *_activityIndicators;
    NSMutableArray *_imageViews;
    NSMutableArray *_selectedImageViews;
}


@property (weak, nonatomic) NSObject<WFImageContentItemCellDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *items; // ivar: _items


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)imageViewTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif