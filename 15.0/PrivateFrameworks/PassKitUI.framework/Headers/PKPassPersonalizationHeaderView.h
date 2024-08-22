// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSPERSONALIZATIONHEADERVIEW_H
#define PKPASSPERSONALIZATIONHEADERVIEW_H



#import "PKTableHeaderView.h"

@interface PKPassPersonalizationHeaderView : PKTableHeaderView {
    PKTableHeaderView *_tableHeaderView;
}


@property (nonatomic) NSUInteger state; // ivar: _state


-(id)initWithLogoImage:(id)arg0 description:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureForCurrentState;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif