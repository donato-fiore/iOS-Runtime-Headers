// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12COREAUDIOKIT30AUGENERICVIEWTABLEVIEWCELLBASE_H
#define _TTC12COREAUDIOKIT30AUGENERICVIEWTABLEVIEWCELLBASE_H

@class UICollectionViewCell, UILabel, NSLayoutConstraint, UIColor;



@interface _TtC12CoreAudioKit30AUGenericViewTableViewCellBase : UICollectionViewCell {
    ? owner;
    ? parameter;
}


@property (nonatomic, weak) UILabel *parameterName; // ivar: parameterName
@property (nonatomic, weak) NSLayoutConstraint *parameterWidthConstraint; // ivar: parameterWidthConstraint
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, weak) UILabel *valueLabel; // ivar: valueLabel
@property (nonatomic, weak) NSLayoutConstraint *valueStackWidthConstraint; // ivar: valueStackWidthConstraint


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif