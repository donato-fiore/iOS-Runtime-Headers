// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCOBSERVATION_H
#define GCOBSERVATION_H


#import <Foundation/Foundation.h>


@interface GCObservation : NSObject

@property (nonatomic) *void context; // ivar: _context
@property (weak, nonatomic) id *observer; // ivar: _observer
@property (nonatomic) NSUInteger options; // ivar: _options


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithObserver:(id)arg0 options:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif