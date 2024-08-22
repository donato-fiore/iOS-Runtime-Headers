// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSHOWIDENTIFIERACTIVITY_H
#define ICSHOWIDENTIFIERACTIVITY_H

@class UIActivity, NSString;



@interface ICShowIdentifierActivity : UIActivity

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif