// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUBLOCKACTIVITY_H
#define MUBLOCKACTIVITY_H

@class UIActivity, NSString;



@interface MUBlockActivity : UIActivity

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(id)createBlockActivitiesFromPlaceActionItems:(id)arg0 usingActionManager:(id)arg1 presentationOptions:(id)arg2 analyticsModuleMetadata:(id)arg3 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)activityCategory;
-(id)activityTitle;
-(id)activityType;
-(id)initWithTitle:(id)arg0 systemImageName:(id)arg1 activityType:(id)arg2 block:(id)arg3 ;
-(void)performActivity;


@end


#endif