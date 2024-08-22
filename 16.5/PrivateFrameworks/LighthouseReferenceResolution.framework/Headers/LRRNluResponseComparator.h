// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRRNLURESPONSECOMPARATOR_H
#define LRRNLURESPONSECOMPARATOR_H


#import <Foundation/Foundation.h>


@interface LRRNluResponseComparator : NSObject



-(BOOL)compare:(id)arg0 response2:(id)arg1 ;
-(BOOL)compareParses:(id)arg0 parse2:(id)arg1 ;
-(BOOL)compareParsesWithProb:(id)arg0 parse2:(id)arg1 ;
-(BOOL)compareProbability:(CGFloat)arg0 probability2:(CGFloat)arg1 ;
-(BOOL)compareUserDialogActs:(id)arg0 uda2:(id)arg1 ;
-(BOOL)compareUsoGraphs:(id)arg0 graph2:(id)arg1 ;


@end


#endif