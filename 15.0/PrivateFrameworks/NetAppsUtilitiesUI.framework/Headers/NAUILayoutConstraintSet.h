// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAUILAYOUTCONSTRAINTSET_H
#define NAUILAYOUTCONSTRAINTSET_H

@class NSArray, UIView;

#import <Foundation/Foundation.h>


@interface NAUILayoutConstraintSet : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) id *builder; // ivar: _builder
@property (copy, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, weak, nonatomic) UIView *owningView; // ivar: _owningView


-(id)initWithOwningView:(id)arg0 constraintBuilder:(id)arg1 ;
-(void)activateIfNeeded;
-(void)invalidate;
-(void)updateConstraintConstants;


@end


#endif