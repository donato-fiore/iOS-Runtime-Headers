// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDTRANSFORMATIONFLINTONLY_H
#define FCFEEDTRANSFORMATIONFLINTONLY_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationFlintOnly : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)transformFeedItems:(id)arg0 ;


@end


#endif