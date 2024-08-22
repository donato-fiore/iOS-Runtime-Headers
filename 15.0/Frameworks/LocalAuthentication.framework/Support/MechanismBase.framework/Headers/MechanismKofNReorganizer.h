// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MECHANISMKOFNREORGANIZER_H
#define MECHANISMKOFNREORGANIZER_H

@class NSNumber;


#import "MechanismBase.h"

@interface MechanismKofNReorganizer : MechanismBase {
    id *_apply;
}


@property (readonly, nonatomic) NSNumber *k; // ivar: _k
@property (readonly, nonatomic) NSInteger max; // ivar: _max
@property (readonly, nonatomic) NSInteger min; // ivar: _min


-(id)initWithMin:(NSInteger)arg0 max:(NSInteger)arg1 k:(id)arg2 request:(id)arg3 apply:(id)arg4 ;
-(id)reorganizeMechanisms:(id)arg0 k:(NSInteger)arg1 error:(*id)arg2 ;
-(void)runWithHints:(id)arg0 eventsDelegate:(id)arg1 reply:(id)arg2 ;


@end


#endif