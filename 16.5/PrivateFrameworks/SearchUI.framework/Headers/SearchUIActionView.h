// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIACTIONVIEW_H
#define SEARCHUIACTIONVIEW_H

@class CNActionView;


#import "SearchUIImage.h"

@interface SearchUIActionView : CNActionView

@property (retain, nonatomic) SearchUIImage *sfImage; // ivar: _sfImage


-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif