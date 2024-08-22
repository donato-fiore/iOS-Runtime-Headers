// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEEDTRANSFORMATIONUNSEENONLY_H
#define FCFEEDTRANSFORMATIONUNSEENONLY_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>

#import "FCReadingHistory.h"

@interface FCFeedTransformationUnseenOnly : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCReadingHistory *history; // ivar: _history
@property (readonly) Class superclass;


+(id)transformationWithReadingHistory:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif