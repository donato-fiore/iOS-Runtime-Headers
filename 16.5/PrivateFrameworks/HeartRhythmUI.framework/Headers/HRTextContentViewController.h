// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRTEXTCONTENTVIEWCONTROLLER_H
#define HRTEXTCONTENTVIEWCONTROLLER_H

@class HKViewController, NSString;



@interface HRTextContentViewController : HKViewController

@property (copy, nonatomic) NSString *string; // ivar: _string


-(id)_attributedStringFromString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)textView;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif