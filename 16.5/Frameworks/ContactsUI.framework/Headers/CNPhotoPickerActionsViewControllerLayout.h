// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERACTIONSVIEWCONTROLLERLAYOUT_H
#define CNPHOTOPICKERACTIONSVIEWCONTROLLERLAYOUT_H

@protocol CNPhotoPickerActionsViewControllerLayout;

#import <Foundation/Foundation.h>


@interface CNPhotoPickerActionsViewControllerLayout : NSObject <CNPhotoPickerActionsViewControllerLayout>



@property (readonly, nonatomic) CGRect actionButtonsViewFrame;
@property (readonly, nonatomic) NSInteger buttonCount; // ivar: _buttonCount
@property (readonly, nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) CGRect imageContainerViewFrame;


+(CGFloat)buttonHeight;
+(CGFloat)heightForButtonsViewWithButtonCount:(NSInteger)arg0 ;
-(id)initWithContainerSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 buttonCount:(NSInteger)arg2 ;
-(struct CGRect )actionButtonsViewFrameForButtonCount:(NSInteger)arg0 ;


@end


#endif