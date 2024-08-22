// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEARTBEATSEQUENCECHARTDATA_H
#define HKHEARTBEATSEQUENCECHARTDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HKHeartbeatSequenceChartData : NSObject

@property (nonatomic) CGFloat initialXAxisOffset; // ivar: _initialXAxisOffset
@property (readonly, nonatomic) NSMutableArray *sections; // ivar: _sections


-(NSInteger)sectionCount;
-(id)init;
-(void)_expandToSection:(NSInteger)arg0 ;
-(void)addSequencePoint:(id)arg0 section:(NSInteger)arg1 ;
-(void)enumerateSequences:(id)arg0 ;


@end


#endif