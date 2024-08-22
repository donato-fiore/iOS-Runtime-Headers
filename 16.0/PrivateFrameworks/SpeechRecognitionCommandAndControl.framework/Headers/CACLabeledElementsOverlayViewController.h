// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACLABELEDELEMENTSOVERLAYVIEWCONTROLLER_H
#define CACLABELEDELEMENTSOVERLAYVIEWCONTROLLER_H

@class UIViewController;
@protocol CACViewController;



@interface CACLabeledElementsOverlayViewController : UIViewController <CACViewController>



@property (readonly, nonatomic) BOOL isOverlay;
@property (readonly, nonatomic) NSInteger zOrder;


-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)setLabeledElements:(id)arg0 ;


@end


#endif