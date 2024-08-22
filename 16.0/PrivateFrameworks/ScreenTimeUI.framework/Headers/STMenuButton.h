// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMENUBUTTON_H
#define STMENUBUTTON_H

@class UIButton;
@protocol STMenuButtonDelegate;



@interface STMenuButton : UIButton

@property (weak) NSObject<STMenuButtonDelegate> *delegate; // ivar: _delegate


-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;


@end


#endif