// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12COREAUDIOKIT26AUINDEXEDPARAMETERVIEWCELL_H
#define _TTC12COREAUDIOKIT26AUINDEXEDPARAMETERVIEWCELL_H

@class TtC12CoreAudioKit30AUGenericViewTableViewCellBase, UIButton;



@interface _TtC12CoreAudioKit26AUIndexedParameterViewCell : TtC12CoreAudioKit30AUGenericViewTableViewCellBase {
    ? indexPath;
}


@property (nonatomic, weak) UIButton *editButton; // ivar: editButton
@property (nonatomic, weak) UIButton *valueButton; // ivar: valueButton


-(id)initWithCoder:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif