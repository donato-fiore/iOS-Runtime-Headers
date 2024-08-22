// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONCLAMP_H
#define FCFEEDTRANSFORMATIONCLAMP_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>

#import "FCFeedRange.h"

@interface FCFeedTransformationClamp : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FCFeedRange *feedRange; // ivar: _feedRange
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)transformationWithDateRange:(id)arg0 ;
+(id)transformationWithFeedRange:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif