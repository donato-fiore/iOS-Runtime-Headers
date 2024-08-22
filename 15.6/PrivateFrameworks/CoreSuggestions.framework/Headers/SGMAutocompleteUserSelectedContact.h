// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMAUTOCOMPLETEUSERSELECTEDCONTACT_H
#define SGMAUTOCOMPLETEUSERSELECTEDCONTACT_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMAutocompleteUserSelectedContact : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 wasSuggestedContact:(struct SGMTypeSafeBool_ )arg1 wasKnownContact:(struct SGMTypeSafeBool_ )arg2 app:(struct SGMContactDetailUsedApp_ )arg3 ;


@end


#endif