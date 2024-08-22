// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLONGPRESSDISAMBIGUATIONALERTITEM_H
#define SBLONGPRESSDISAMBIGUATIONALERTITEM_H

@class SBAlertItem;



@interface SBLongPressDisambiguationAlertItem : SBAlertItem {
    NSInteger _result;
}


@property (readonly, copy, nonatomic) id *completion; // ivar: _completion


-(BOOL)dismissOnLock;
-(BOOL)ignoreIfAlreadyDisplaying;
-(id)init;
-(id)initWithCompletion:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)deactivateForButton;


@end


#endif