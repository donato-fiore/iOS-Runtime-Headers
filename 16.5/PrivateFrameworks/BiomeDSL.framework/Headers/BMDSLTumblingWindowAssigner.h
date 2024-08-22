// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLTUMBLINGWINDOWASSIGNER_H
#define BMDSLTUMBLINGWINDOWASSIGNER_H

@class NSArray;
@protocol BMDSLWindowAssigner;


#import "BMDSLWindowAssigner.h"
#import "BMDSLAggregator.h"

@interface BMDSLTumblingWindowAssigner : BMDSLWindowAssigner <BMDSLWindowAssigner>



@property (retain, nonatomic) BMDSLAggregator *aggregator; // ivar: _aggregator
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (copy, nonatomic) NSArray *timestampKeyPaths; // ivar: _timestampKeyPaths


+(BOOL)supportsSecureCoding;
-(id)bpsWindowAssigner;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterval:(CGFloat)arg0 timestampKeyPaths:(id)arg1 aggregator:(id)arg2 ;
-(id)initWithInterval:(CGFloat)arg0 timestampKeyPaths:(id)arg1 aggregator:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif