// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXAXCUSTOMROTOR_H
#define SXAXCUSTOMROTOR_H

@class UIAccessibilityCustomRotor, NSOrderedSet;



@interface SXAXCustomRotor : UIAccessibilityCustomRotor

@property (copy, nonatomic) NSOrderedSet *rotorItems; // ivar: _rotorItems


+(id)rotorWithName:(id)arg0 ;
-(NSInteger)indexOfRotorItem:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)rotorItemAfter:(id)arg0 ;
-(id)rotorItemBefore:(id)arg0 ;


@end


#endif