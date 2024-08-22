// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EFCOMBINELATESTOBSERVABLE_H
#define _EFCOMBINELATESTOBSERVABLE_H

@class NSArray;


#import "EFObservable.h"

@interface _EFCombineLatestObservable : EFObservable

@property (copy, nonatomic) NSArray *observables; // ivar: _observables


-(id)initWithObservables:(id)arg0 ;
-(id)subscribe:(id)arg0 ;


@end


#endif