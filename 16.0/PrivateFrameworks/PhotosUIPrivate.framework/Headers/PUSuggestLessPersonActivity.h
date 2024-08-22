// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSUGGESTLESSPERSONACTIVITY_H
#define PUSUGGESTLESSPERSONACTIVITY_H

@class PXActivity, NSString;



@interface PUSuggestLessPersonActivity : PXActivity {
    NSString *_cachedImageName;
}




+(NSInteger)_activityStyle;
+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_facesInCurrentAsset;
-(id)_personFromFace:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif