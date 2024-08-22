// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT23SHAPELISTVIEWCONTROLLER_H
#define _TTC8PAPERKIT23SHAPELISTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8PaperKit23ShapeListViewController : UIViewController {
    ? stackView;
    ? stackViewCols;
    ? horizontalStackViews;
    ? preferredPopoverSize;
    ? contentViewMargin;
    ? itemSize;
    ? horizontalInterItemSpacing;
    ? verticalInterItemSpacing;
    ? delegate;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didSelectAddArrow:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddArrowShape:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddChatBubble:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddLine:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddOval:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddPolygon:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddRectangle:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddRoundedRect:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddStar:(id)arg0 withEvent:(id)arg1 ;
-(void)didSelectAddTriangle:(id)arg0 withEvent:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif