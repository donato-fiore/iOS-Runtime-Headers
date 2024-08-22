// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEHUBINTROCENTERVIEW_H
#define HUHOMEHUBINTROCENTERVIEW_H

@class UIView, NSArray, UIImageView, UILabel;



@interface HUHomeHubIntroCenterView : UIView

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIImageView *contentImageView; // ivar: _contentImageView
@property (retain, nonatomic) UILabel *contentLabel; // ivar: _contentLabel


-(id)initWithExplanationText:(id)arg0 ;
-(void)updateConstraints;


@end


#endif