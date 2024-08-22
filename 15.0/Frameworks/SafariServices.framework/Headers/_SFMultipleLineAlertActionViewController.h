// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFMULTIPLELINEALERTACTIONVIEWCONTROLLER_H
#define _SFMULTIPLELINEALERTACTIONVIEWCONTROLLER_H

@class UIViewController, NSString;



@interface _SFMultipleLineAlertActionViewController : UIViewController {
    NSString *_title;
    NSString *_detail;
    NSInteger _style;
}




-(id)initWithTitle:(id)arg0 detail:(id)arg1 style:(NSInteger)arg2 ;
-(struct CGSize )preferredContentSize;
-(void)loadView;


@end


#endif