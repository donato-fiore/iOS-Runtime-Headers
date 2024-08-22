// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSOURCEMESSAGEVIEWCONTROLLER_H
#define WDSOURCEMESSAGEVIEWCONTROLLER_H

@class HKViewController, UILabel, HKSource;



@interface WDSourceMessageViewController : HKViewController {
    UILabel *_messageLabel;
    HKSource *_source;
}


@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(id)initWithStyle:(NSInteger)arg0 source:(id)arg1 ;
-(void)_updateFont;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif