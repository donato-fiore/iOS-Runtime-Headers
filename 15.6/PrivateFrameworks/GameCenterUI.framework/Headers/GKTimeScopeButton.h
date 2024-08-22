// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTIMESCOPEBUTTON_H
#define GKTIMESCOPEBUTTON_H



#import "GKDynamicButton.h"

@interface GKTimeScopeButton : GKDynamicButton

@property (nonatomic) NSInteger leaderboardOccurrence; // ivar: _leaderboardOccurrence
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)updateWithTitle:(id)arg0 ;


@end


#endif