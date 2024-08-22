// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSHEADERVIEW_H
#define STSHEADERVIEW_H

@class UICollectionReusableView, UILabel, NSArray, NSString;



@interface STSHeaderView : UICollectionReusableView {
    UILabel *_label;
    NSArray *_constraints;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif