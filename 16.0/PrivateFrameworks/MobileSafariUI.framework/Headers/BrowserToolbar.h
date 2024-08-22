// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BROWSERTOOLBAR_H
#define BROWSERTOOLBAR_H

@class SFToolbar, UIToolbar;



@interface BrowserToolbar : SFToolbar

@property (readonly, nonatomic) UIToolbar *replacementToolbar; // ivar: _replacementToolbar


-(id)initWithPlacement:(NSInteger)arg0 hideBackground:(BOOL)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;
-(void)_updateItemsForReplacementToolbar;
-(void)layoutSubviews;
-(void)setItems:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif