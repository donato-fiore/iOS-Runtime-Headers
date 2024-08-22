// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SMUCONTENTUNAVAILABLEVIEW_H
#define _SMUCONTENTUNAVAILABLEVIEW_H

@class UIContentUnavailableView;
@protocol SMUContentUnavailableViewProtocol;



@interface _SMUContentUnavailableView : UIContentUnavailableView <SMUContentUnavailableViewProtocol>





-(id)configurationForType:(NSInteger)arg0 ;
-(void)smu_updateWithType:(NSInteger)arg0 text:(id)arg1 secondaryText:(id)arg2 image:(id)arg3 buttonTitle:(id)arg4 buttonPrimaryAction:(id)arg5 ;


@end


#endif