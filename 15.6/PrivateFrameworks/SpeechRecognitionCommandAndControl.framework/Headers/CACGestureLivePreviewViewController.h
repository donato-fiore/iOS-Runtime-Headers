// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACGESTURELIVEPREVIEWVIEWCONTROLLER_H
#define CACGESTURELIVEPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary;
@protocol CACViewController;



@interface CACGestureLivePreviewViewController : UIViewController <CACViewController>



@property (readonly, nonatomic) BOOL isOverlay;
@property (retain, nonatomic) NSMutableDictionary *mappedPathEffectViews; // ivar: _mappedPathEffectViews
@property (readonly, nonatomic) NSInteger zOrder;


-(id)newPathEffectView;
-(void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg0 forces:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)removeTrackingForFingerIdentifier:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif