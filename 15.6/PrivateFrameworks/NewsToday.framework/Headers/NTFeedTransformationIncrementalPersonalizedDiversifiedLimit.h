// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTFEEDTRANSFORMATIONINCREMENTALPERSONALIZEDDIVERSIFIEDLIMIT_H
#define NTFEEDTRANSFORMATIONINCREMENTALPERSONALIZEDDIVERSIFIEDLIMIT_H

@class NSString, NSArray;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTFeedTransformationIncrementalPersonalizedDiversifiedLimit : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *priorFeedItems; // ivar: _priorFeedItems
@property (retain, nonatomic) NSObject<FCFeedTransforming> *privateLimitTransformation; // ivar: _privateLimitTransformation
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFunctionProvider:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif