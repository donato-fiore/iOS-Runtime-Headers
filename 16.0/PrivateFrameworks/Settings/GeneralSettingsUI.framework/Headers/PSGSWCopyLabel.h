// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGSWCOPYLABEL_H
#define PSGSWCOPYLABEL_H

@class UILabel, UIEditMenuInteraction;



@interface PSGSWCopyLabel : UILabel

@property (retain, nonatomic) UIEditMenuInteraction *editMenuInteraction; // ivar: _editMenuInteraction


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)copy:(id)arg0 ;
-(void)didLongPress:(id)arg0 ;


@end


#endif