// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT30AUGENERICVIEWPARAMETERCELLBASE_H
#define _TTC12COREAUDIOKIT30AUGENERICVIEWPARAMETERCELLBASE_H

@class UICollectionViewCell, UILabel, NSLayoutConstraint, UIColor;



@interface _TtC12CoreAudioKit30AUGenericViewParameterCellBase : UICollectionViewCell {
    ? owner;
    ? param;
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