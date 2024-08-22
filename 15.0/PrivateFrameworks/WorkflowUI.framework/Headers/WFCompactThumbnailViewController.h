// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOMPACTTHUMBNAILVIEWCONTROLLER_H
#define WFCOMPACTTHUMBNAILVIEWCONTROLLER_H

@class UIViewController;
@protocol WFCompactThumbnailViewControllerDelegate;



@interface WFCompactThumbnailViewController : UIViewController

@property (readonly, nonatomic) BOOL contentHeightLikelyToChange; // ivar: _contentHeightLikelyToChange
@property (weak, nonatomic) NSObject<WFCompactThumbnailViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger preferredContentMode;


-(BOOL)_canShowWhileLocked;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(void)invalidateContentSize;


@end


#endif