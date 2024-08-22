// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACELEMENTNAMESOVERLAYVIEWCONTROLLER_H
#define CACELEMENTNAMESOVERLAYVIEWCONTROLLER_H

@class UIViewController, NSArray;
@protocol CACViewController;



@interface CACElementNamesOverlayViewController : UIViewController <CACViewController>



@property (readonly, nonatomic) BOOL isOverlay;
@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSInteger zOrder;


-(BOOL)_canShowWhileLocked;
-(void)loadView;


@end


#endif