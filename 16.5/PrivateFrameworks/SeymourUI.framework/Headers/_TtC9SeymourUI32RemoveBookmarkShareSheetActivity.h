// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI32REMOVEBOOKMARKSHARESHEETACTIVITY_H
#define _TTC9SEYMOURUI32REMOVEBOOKMARKSHARESHEETACTIVITY_H

@class UIActivity, UIImage, NSString;



@interface _TtC9SeymourUI32RemoveBookmarkShareSheetActivity : UIActivity {
    ? assetClient;
    ? bookmarkClient;
    ? storefrontLocalizer;
    ? workoutIdentifier;
}


@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)init;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif