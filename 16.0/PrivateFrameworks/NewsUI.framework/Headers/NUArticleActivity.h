// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLEACTIVITY_H
#define NUARTICLEACTIVITY_H

@class UIActivity, NSString, UIImage, NSArray;



@interface NUArticleActivity : UIActivity {
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
}


@property (retain, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (readonly, copy, nonatomic) id *performBlock; // ivar: _performBlock


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithActivityType:(id)arg0 title:(id)arg1 image:(id)arg2 performBlock:(id)arg3 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif