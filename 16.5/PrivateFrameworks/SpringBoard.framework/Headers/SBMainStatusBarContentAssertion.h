// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINSTATUSBARCONTENTASSERTION_H
#define SBMAINSTATUSBARCONTENTASSERTION_H

@class BSSimpleAssertion;



@interface SBMainStatusBarContentAssertion : BSSimpleAssertion

@property (nonatomic) BOOL animated; // ivar: _animated
@property (nonatomic) BOOL dateAndTimeVisible; // ivar: _dateAndTimeVisible
@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 ;


@end


#endif