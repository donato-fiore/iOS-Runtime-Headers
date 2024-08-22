// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKBLOCKUIACTIVITY_H
#define VKBLOCKUIACTIVITY_H

@class UIActivity, UIImage, NSString;



@interface VKBlockUIActivity : UIActivity

@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)activityCategory;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithTitle:(id)arg0 block:(id)arg1 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 activityType:(id)arg2 block:(id)arg3 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 block:(id)arg2 ;
-(id)initWithTitle:(id)arg0 systemImageName:(id)arg1 activityType:(id)arg2 block:(id)arg3 ;
-(id)initWithTitle:(id)arg0 systemImageName:(id)arg1 block:(id)arg2 ;
-(void)performActivity;


@end


#endif