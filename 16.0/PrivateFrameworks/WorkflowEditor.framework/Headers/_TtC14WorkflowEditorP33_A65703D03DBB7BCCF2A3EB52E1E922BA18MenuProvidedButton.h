// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14WORKFLOWEDITORP33_A65703D03DBB7BCCF2A3EB52E1E922BA18MENUPROVIDEDBUTTON_H
#define _TTC14WORKFLOWEDITORP33_A65703D03DBB7BCCF2A3EB52E1E922BA18MENUPROVIDEDBUTTON_H

@class UIButton;



@interface _TtC14WorkflowEditorP33_A65703D03DBB7BCCF2A3EB52E1E922BA18MenuProvidedButton : UIButton {
    ? menuProvider;
    ? configurationUIContext;
}




-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif