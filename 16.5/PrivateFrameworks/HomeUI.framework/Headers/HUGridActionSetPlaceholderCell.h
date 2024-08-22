// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDACTIONSETPLACEHOLDERCELL_H
#define HUGRIDACTIONSETPLACEHOLDERCELL_H



#import "HUGridActionSetCell.h"
#import "HUIconView.h"

@interface HUGridActionSetPlaceholderCell : HUGridActionSetCell {
    HUIconView *_iconView;
}




-(NSUInteger)iconDisplayStyle;
-(id)iconView;
-(void)_setupActionSetCell;
-(void)setIconView:(id)arg0 ;
-(void)updateConstraints;


@end


#endif