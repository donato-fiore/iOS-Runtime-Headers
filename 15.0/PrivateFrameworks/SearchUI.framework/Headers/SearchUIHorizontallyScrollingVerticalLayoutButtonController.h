// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGVERTICALLAYOUTBUTTONCONTROLLER_H
#define SEARCHUIHORIZONTALLYSCROLLINGVERTICALLAYOUTBUTTONCONTROLLER_H



#import "SearchUIHorizontallyScrollingContainerButtonController.h"
#import "SearchUIImageView.h"
#import "SearchUILabel.h"

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController {
    SearchUIImageView *thumbnailView;
}


@property (retain, nonatomic) SearchUILabel *footnoteLabel; // ivar: _footnoteLabel
@property (retain, nonatomic) SearchUILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)spacing;
-(id)setupContentView;
-(id)thumbnailView;
-(void)setCardSectionRowModel:(id)arg0 ;
-(void)setThumbnailView:(id)arg0 ;


@end


#endif