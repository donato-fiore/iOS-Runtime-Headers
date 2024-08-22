// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMFOCUSLOCKBADGE_H
#define CAMFOCUSLOCKBADGE_H

@class CEKBadgeTextView;



@interface CAMFocusLockBadge : CEKBadgeTextView

@property (nonatomic) NSInteger focusLockType; // ivar: _focusLockType


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateText;


@end


#endif