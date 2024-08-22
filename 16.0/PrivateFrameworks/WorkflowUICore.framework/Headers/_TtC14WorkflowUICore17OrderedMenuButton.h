// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14WORKFLOWUICORE17ORDEREDMENUBUTTON_H
#define _TTC14WORKFLOWUICORE17ORDEREDMENUBUTTON_H

@class UIButton;



@interface _TtC14WorkflowUICore17OrderedMenuButton : UIButton {
    ? glyphImageView;
    ? chevronUpView;
    ? chevronDownView;
    ? platterColor;
}




-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;


@end


#endif