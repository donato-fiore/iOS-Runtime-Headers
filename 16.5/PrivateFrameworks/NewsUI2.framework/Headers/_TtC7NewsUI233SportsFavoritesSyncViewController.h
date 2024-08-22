// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI233SPORTSFAVORITESSYNCVIEWCONTROLLER_H
#define _TTC7NEWSUI233SPORTSFAVORITESSYNCVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC7NewsUI233SportsFavoritesSyncViewController : OBWelcomeController {
    ? styler;
    ? eventHandler;
    ? app;
    ? imageView;
    ? confirmationButton;
    ? deferButton;
    ? conclusion;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)doConfirmationAction;
-(void)doDeferAction;


@end


#endif