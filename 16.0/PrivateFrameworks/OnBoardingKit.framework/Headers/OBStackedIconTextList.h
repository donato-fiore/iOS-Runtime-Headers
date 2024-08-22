// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBSTACKEDICONTEXTLIST_H
#define OBSTACKEDICONTEXTLIST_H

@class UIStackView, NSMutableArray;



@interface OBStackedIconTextList : UIStackView {
    CGFloat _itemSpacing;
    NSMutableArray *_entries;
}


@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (nonatomic) CGFloat iconTextPadding; // ivar: _iconTextPadding


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)addEntryWithIcon:(id)arg0 iconSize:(struct CGSize )arg1 attributedText:(id)arg2 ;
-(void)addEntryWithIcon:(id)arg0 iconSize:(struct CGSize )arg1 text:(id)arg2 ;


@end


#endif