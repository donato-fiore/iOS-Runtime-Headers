// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYPPTRESULTSAGGREGATE_H
#define PXSTORYPPTRESULTSAGGREGATE_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface PXStoryPPTResultsAggregate : NSObject {
    NSMutableDictionary *_measureInfos;
    NSMutableDictionary *_extraResultsDictionaryRepresentation;
}


@property (readonly, nonatomic) NSDictionary *extraResultsDictionaryRepresentation;


-(id)_keyForMeasure:(id)arg0 configuration:(id)arg1 ;
-(id)init;
-(void)_addExtraResultsValue:(CGFloat)arg0 metric:(NSInteger)arg1 forMeasure:(id)arg2 configuration:(id)arg3 ;
-(void)addValue:(CGFloat)arg0 metric:(NSInteger)arg1 forMeasure:(id)arg2 configuration:(id)arg3 ;


@end


#endif