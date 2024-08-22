// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPOLOGYSTATISTICAUTOCORRECTIONLISTUI_H
#define TITYPOLOGYSTATISTICAUTOCORRECTIONLISTUI_H



#import "TITypologyStatistic.h"

@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic {
    BOOL _didSetListUIDisplayed;
    BOOL _listUIDisplayed;
}


@property (readonly, nonatomic) NSInteger displayedToHidden; // ivar: _displayedToHidden
@property (readonly, nonatomic) NSInteger hiddenToDisplayed; // ivar: _hiddenToDisplayed
@property (readonly, nonatomic) NSInteger inputsWhileDisplayed; // ivar: _inputsWhileDisplayed
@property (readonly, nonatomic) NSInteger inputsWhileHidden; // ivar: _inputsWhileHidden


-(id)structuredReport;
-(void)addInputCount;
-(void)setListUIDisplayed:(BOOL)arg0 ;
-(void)visitRecordAutocorrections:(id)arg0 ;
-(void)visitRecordKeyboardInput:(id)arg0 ;
-(void)visitRecordSync:(id)arg0 ;


@end


#endif