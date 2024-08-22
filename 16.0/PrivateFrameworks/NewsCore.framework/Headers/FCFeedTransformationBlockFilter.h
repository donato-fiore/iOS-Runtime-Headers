// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDTRANSFORMATIONBLOCKFILTER_H
#define FCFEEDTRANSFORMATIONBLOCKFILTER_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationBlockFilter : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *predicate; // ivar: _predicate
@property (readonly) Class superclass;


+(id)blockFilterWithPredicate:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif