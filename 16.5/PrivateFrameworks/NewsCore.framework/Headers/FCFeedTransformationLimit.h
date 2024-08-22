// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONLIMIT_H
#define FCFEEDTRANSFORMATIONLIMIT_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationLimit : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly) Class superclass;


+(id)transformationWithLimit:(NSUInteger)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif