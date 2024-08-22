// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPPERFORMANCE_H
#define CVNLPPERFORMANCE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CVNLPPerformance : NSObject

@property (readonly, nonatomic) BOOL computePerf; // ivar: _computePerf
@property (readonly, nonatomic) NSMutableDictionary *results; // ivar: _results


-(id)initWithOptions:(id)arg0 ;
-(void)run:(id)arg0 block:(id)arg1 ;


@end


#endif