// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SEARCHENTRYWITHMATCHDISPLAY_H
#define _SEARCHENTRYWITHMATCHDISPLAY_H

@class UISearchBar, UILabel, NSString;



@interface _SearchEntryWithMatchDisplay : UISearchBar

@property (readonly) UILabel *matchDisplayLabel; // ivar: _matchDisplayLabel
@property (retain, nonatomic) NSString *matchDisplayString; // ivar: _matchDisplayString


-(id)_createMatchDisplayLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)matchDisplayVisible:(BOOL)arg0 ;


@end


#endif