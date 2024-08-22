// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDEFAULTSTYLESPRODUCER_H
#define PXSTORYDEFAULTSTYLESPRODUCER_H

@class NSArray;
@protocol PXStoryStylesProducer, OS_os_log;

#import <Foundation/Foundation.h>


@interface PXStoryDefaultStylesProducer : NSObject <PXStoryStylesProducer>

 {
    NSObject<OS_os_log> *_log;
}


@property (readonly, copy, nonatomic) NSArray *autoEditDecisionLists; // ivar: _autoEditDecisionLists


-(id)init;
-(id)initWithAutoEditDecisionLists:(id)arg0 ;
-(id)requestStylesWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif