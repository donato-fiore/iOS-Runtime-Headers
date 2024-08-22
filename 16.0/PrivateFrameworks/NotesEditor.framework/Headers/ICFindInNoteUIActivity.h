// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFINDINNOTEUIACTIVITY_H
#define ICFINDINNOTEUIACTIVITY_H

@class UIActivity;
@protocol ICFindInNoteUIActivityDelegate;



@interface ICFindInNoteUIActivity : UIActivity

@property (weak, nonatomic) NSObject<ICFindInNoteUIActivityDelegate> *delegate; // ivar: _delegate


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)activityCategory;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)initWithDelegate:(id)arg0 ;
-(void)performActivity;


@end


#endif