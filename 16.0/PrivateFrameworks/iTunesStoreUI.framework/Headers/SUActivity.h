// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUACTIVITY_H
#define SUACTIVITY_H

@class UIActivity, UIImage, NSString, UIViewController;
@protocol SUActivityDelegate;



@interface SUActivity : UIActivity {
    UIImage *_suActivityImage;
    NSString *_suActivityTitle;
    NSString *_suActivityType;
    UIViewController *_suActivityViewController;
}


@property (weak, nonatomic) NSObject<SUActivityDelegate> *ITunesStoreDelegate; // ivar: _delegate


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)dealloc;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)setActivityImage:(id)arg0 ;
-(void)setActivityTitle:(id)arg0 ;
-(void)setActivityType:(id)arg0 ;
-(void)setActivityViewController:(id)arg0 ;


@end


#endif