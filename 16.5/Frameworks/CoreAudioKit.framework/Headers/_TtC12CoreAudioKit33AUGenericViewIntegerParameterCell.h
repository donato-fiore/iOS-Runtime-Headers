// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT33AUGENERICVIEWINTEGERPARAMETERCELL_H
#define _TTC12COREAUDIOKIT33AUGENERICVIEWINTEGERPARAMETERCELL_H

@class TtC12CoreAudioKit30AUGenericViewParameterCellBase, UIButton;



@interface _TtC12CoreAudioKit33AUGenericViewIntegerParameterCell : TtC12CoreAudioKit30AUGenericViewParameterCellBase {
    ? indexPath;
}


@property (nonatomic, weak) UIButton *editButton; // ivar: editButton
@property (nonatomic, weak) UIButton *valueButton; // ivar: valueButton


-(id)initWithCoder:(id)arg0 ;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;


@end


#endif