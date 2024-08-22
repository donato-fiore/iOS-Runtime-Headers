// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUHIDEACTIVITY_H
#define PUHIDEACTIVITY_H

@class PXActivity;



@interface PUHideActivity : PXActivity {
    BOOL _hiding;
}




+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;
-(void)setItemSourceController:(id)arg0 ;


@end


#endif