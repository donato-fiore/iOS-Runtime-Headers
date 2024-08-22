// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCONSTRAINTUPDATECONTROLLER_H
#define GKCONSTRAINTUPDATECONTROLLER_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface GKConstraintUpdateController : NSObject

@property (retain, nonatomic) NSPointerArray *constraintsToUpdate; // ivar: _constraintsToUpdate


+(id)sharedController;
-(void)_updateConstraints;
-(void)dealloc;
-(void)registerConstraint:(id)arg0 leading:(CGFloat)arg1 forFontTextStyle:(id)arg2 ;
-(void)updateConstraint:(id)arg0 ;


@end


#endif