// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHANDWRITINGFEEDBACKACTIVITY_H
#define PKHANDWRITINGFEEDBACKACTIVITY_H

@class UIActivity, UIImage, NSString;



@interface PKHandwritingFeedbackActivity : UIActivity

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithBlock:(id)arg0 ;
-(void)performActivity;


@end


#endif